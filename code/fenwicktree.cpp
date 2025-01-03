/************************************************************************************
** MIT License
**
** Copyright © 2024 VIKAS AWADHIYA
** Permission is hereby granted, free of charge, to any person obtaining a copy
** of this software and associated documentation files (the “Software”), to deal
** in the Software without restriction, including without limitation the rights
** to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
** copies of the Software, and to permit persons to whom the Software is
** furnished to do so, subject to the following conditions:

** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.

** THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
** SOFTWARE.
*************************************************************************************/


#include "fenwicktree.hpp"

#include <stdexcept>

using namespace std;


void FenwickTree::constructTree(){

    size_t index = 1;
    size_t sentinelIndex = 2;

    size_t maxIndex = nums.size();

    while(sentinelIndex <= maxIndex){

        do{

            auxiliaryArray[index] += nums[index - 1];
            auxiliaryArray[index + ( index & (-index) )] += auxiliaryArray[index];

            ++index;

        } while(index < sentinelIndex);

        sentinelIndex *= 2;
    }

    while(index <= maxIndex){

        auxiliaryArray[index] += nums[index - 1];

        size_t otherIndex = index + ( index & (-index) );

        if(otherIndex <= maxIndex){

            auxiliaryArray[otherIndex] += auxiliaryArray[index];
        }

        ++index;
    }

}

int FenwickTree::sumUpTo(size_t index) const{

    int sum = 0;

    while(index > 0){

        sum += auxiliaryArray[index];

        index -= ( index & (-index) );
    }

    return sum;
}

/*
 * Initialization of auxiliary Array doesn’t requires to pass zero as initialization value
 * for all of its elements because the allocator of std::vector value initialize the elements
 * if no value is provided.
 *
*/

FenwickTree::FenwickTree(vector<int> nums): auxiliaryArray(nums.size() + 1), nums( std::move(nums) ) {

    constructTree();
}

size_t FenwickTree::size() const{

    return nums.size();
}

void FenwickTree::elementUpdate(size_t index, int val) {

    int diff = val - nums.at(index);
    nums[index] = val;

    ++index;

    size_t maxIndex = nums.size();

    do{

        auxiliaryArray[index] += diff;

        index += ( index & (-index) );

    } while(index <= maxIndex);
}

int FenwickTree::rangeSum(size_t inclusiveLowerBound, size_t inclusiveUpperBound) const{

    if(inclusiveUpperBound >= nums.size() || inclusiveUpperBound < inclusiveLowerBound){

        throw invalid_argument("Invalid range.");
    }

    if(inclusiveLowerBound == inclusiveUpperBound){

        return nums[inclusiveUpperBound];
    }

    return sumUpTo(inclusiveUpperBound + 1) - sumUpTo(inclusiveLowerBound);
}

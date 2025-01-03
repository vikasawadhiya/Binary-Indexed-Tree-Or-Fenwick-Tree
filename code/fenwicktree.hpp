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


#ifndef FENWICKTREE_HPP
#define FENWICKTREE_HPP

#include <vector>

class FenwickTree {

    std::vector<int> auxiliaryArray;
    std::vector<int> nums;

    void constructTree();

    int sumUpTo(size_t index) const;

public:
    FenwickTree(std::vector<int> nums);

    size_t size() const;

    void elementUpdate(size_t index, int val);

    int rangeSum(size_t inclusiveLowerBound, size_t inclusiveUpperBound) const;
};

#endif // FENWICKTREE_HPP

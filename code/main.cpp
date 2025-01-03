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

#include <iostream>

#include "fenwicktree.hpp"

using namespace std;

int main(int, char*[]){

    FenwickTree fTree{ {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16} };

    int sum = fTree.rangeSum(1, 4); // In tutorial document range [1, 4] is represented by range [2, 5]
                                    // because of 1-based index.

    cout << "Sum of range [1, 4] = " << sum << '\n';

    fTree.elementUpdate(4, 9); // In tutorial document Array[4] is represented by Array[5] because of
                               // 1-based index.

    sum = fTree.rangeSum(4, 5); // In tutorial document range [4, 5] is represented by range [5, 6]
                                // because of 1-based index.

    cout << "After update, Sum of range [4, 5] = " << sum << endl;
}

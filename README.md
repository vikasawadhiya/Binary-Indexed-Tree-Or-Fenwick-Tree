# Binary Indexed Tree or Fenwick Tree

Binary Indexed Tree (BIT) or Fenwick Tree is an implicit tree data-structure. It is an optimize tree data-structure like AVL Tree or Red-Black Tree and performs operations in logarithmic time complexity but like other tree structures, it doesn’t contain elements directly rather contains the information about the elements (range of elements). Binary Indexed Tree or Fenwick Tree performs range sum query and element update operations in O(log n) logarithmic time complexity and  naïve and prefix sum array methods unable to perform both of these operations in logarithmic time complexity.

As Binary Indexed Tree or Fenwick Tree is an implicit tree data-structure and doesn’t require nodes explicitly to represent the tree data-structure rather it is constructed in auxiliary array of size one more than of the array of elements and due to this it has O(n) linear space complexity. The implicit parent-child relationship among the elements exists through binary indexing technique.

Binary Indexed Tree or Fenwick tree is used most of the time for range sum query, but it can also be used to find other type of queries like minimum or maximum range query.


## Documentation 

The tutorial document [BinaryIndexedTreeOrFenwickTree.pdf](https://github.com/vikasawadhiya/Binary-Indexed-Tree-Or-Fenwick-Tree/blob/main/BinaryIndexedTreeOrFenwickTree.pdf) contains 20 pages and explains the concept in deepest level and explore all expects of Binary Indexed Tree or Fenwick Tree. Tutorial document is written in simplest manner and doesn’t feel like reading a typical technical document. It uses a lot of pictorial representations to explain the concept.

The tutorial document explains Binary Indexing concept which is foundational concept the Binary Indexed Tree or Fenwick Tree is built upon, and which turn a normal auxiliary array into powerful optimized implicit tree data-structure. It first explains how auxiliary array represents Binary Indexed Tree or Fenwick Tree then it explains how the range sum query and element update operations work step by step.

Then tutorial document explains Binary Indexing the core concept of BIT or Fenwick Tree and demystify its inbuild hierarchy and how this inbuild hierarchy divides the array into different ranges and how these ranges bring the time complexity to O(log n) logarithmic time complexity for both range sum query and element update operations. It provides detailed analysis on how the range sum query and element update operation achieves the logarithmic time complexity and finally discuss how BIT or Fenwick Tree can be constructed in O(n) linear time complexity.


## Implementation & Usage

The C++ code demonstrates how Binary Indexed Tree or Fenwick Tree can be implemented for the range sum queries in simplest manner. Implementation also contains the main.cpp file to demonstrate how to use it.

A Fenwick tree can be constructed by passing the array of integers to the constructor.

```cpp
FenwickTree fTree{ {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16} };
```

Range sum query

```cpp
int sum = fTree.rangSum(1, 4);
```

Element update

```cpp
fTree.elementUpdate(4, 9);
```


## Example

If we have an array of integers ` [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]` then following would be the BIT or Fenwick tree.

|               |   |   |   |   |    |   |    |   |    |   |    |    |    |    |    |    |    |
|:---           |:-:|:-:|:-:|:-:| :-:|:-:|:-: |:-:|:-: |:-:|:-: |:-: |:-: |:-: |:-: |:-: |:-: |
|Array =        | - | 1 | 2 | 3 | 4  | 5 | 6  | 7 | 8  | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 |
|               |   |   |   |   |    |   |    |   |    |   |    |    |    |    |    |    |    |
|BIT =          | - | 1 | 3 | 3 | 10 | 5 | 11 | 7 | 36 | 9 | 19 | 11 | 42 | 13 | 27 | 15 | 136|

This array representation of Binary Indexed Tree (BIT) or Fenwick Tree illustrates how the BIT or Fenwick tree is represented in an array as an implicit tree. You can see conventional tree representation of BIT or Fenwick tree in tutorial document.


## License

The code is licensed under the [MIT License](https://github.com/vikasawadhiya/Binary-Indexed-Tree-Or-Fenwick-Tree/blob/main/LICENSE).<br/>
The tutorial document [BinaryIndexedTreeOrFenwickTree.pdf](https://github.com/vikasawadhiya/Binary-Indexed-Tree-Or-Fenwick-Tree/blob/main/BinaryIndexedTreeOrFenwickTree.pdf) is licensed under the [CC BY 4.0](https://creativecommons.org/licenses/by/4.0/).

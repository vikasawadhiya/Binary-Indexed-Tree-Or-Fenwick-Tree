# Binary Indexed Tree or Fenwick Tree

Binary Indexed Tree (BIT) or Fenwick Tree performs range query and element update operations in O(log n) logarithmic time complexity on array of elements. The similar efficiency cannot be achieved for both of these operations and at least one of them requires O(n) linear time complexity if these operations are  directly performed on array.

BIT or Fenwick Tree is an implicit tree data structure which is constructed in an array and it doesn’t require explicit nodes. The parent-child relationship among the elements of the array is established using binary indexing. BIT or Fenwick tree is mostly used to find the sum of the range or prefix sum but it can also be used to find other types of range queries like finding the minimum or maximum of the range.

The motivation behind creating this repository is to present a tutorial document which explains the concept of BIT or Fenwick Tree in great detail and explores all logics behind it.

## Documentation 

The tutorial document [BinaryIndexedTreeOrFenwickTree.pdf](https://github.com/vikasawadhiya/Binary-Indexed-Tree-Or-Fenwick-Tree/blob/main/BinaryIndexedTreeOrFenwickTree.pdf) explains the Binary Indexed Tree or Fenwick Tree in depth. It explains concept or logic behind all the aspects like representation of tree in an array, binary indexing concept of the parent-child relationship, complexity of sum query and element update operations.

The tutorial document heavily uses pictorial representations to explain the concepts in the simplest way. 

## Implementation & Usage

C++ implementation of BIT or Fenwick Tree can be used for sum range queries. If you want a more generic BIT or Fenwick tree implementation where BIT or Fenwick tree can be used with other types of range queries like minimum or maximum of a range then you can implement it yourself.

This code demonstrates how BIT or Fenwick Tree can be implemented for the range sum queries in simplest manner and purposely not providing the generic implementation which can be used with other type of range queries because it would introduce code complexity and make the code harder to understand. Implementation also contains the `main.cpp` file.

A Fenwick tree can be constructed by passing the array of integers to the constructor.

```cpp
FenwickTree fTree{ {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16} };
```

Sum range query

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
|Fenwick Tree = | - | 1 | 3 | 3 | 10 | 5 | 11 | 7 | 36 | 9 | 19 | 11 | 42 | 13 | 27 | 15 | 136|

This array representation of BIT or Fenwick tree illustrates how the BIT or Fenwick tree as an implicit tree is stored in an array. You can see conventional tree representation of BIT or Fenwick tree in tutorial document.

## License

The code is licensed under the [MIT License](https://github.com/vikasawadhiya/Binary-Indexed-Tree-Or-Fenwick-Tree/blob/main/LICENSE).<br/>
The tutorial document [BinaryIndexedTreeOrFenwickTree.pdf](https://github.com/vikasawadhiya/Binary-Indexed-Tree-Or-Fenwick-Tree/blob/main/BinaryIndexedTreeOrFenwickTree.pdf) is licensed under the [CC BY 4.0](https://creativecommons.org/licenses/by/4.0/).

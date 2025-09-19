# Generalized C++ Data Structures Toolkit

A comprehensive, header-only C++ template library of fundamental data structures and algorithms, designed for maximum performance and reusability. The repository also includes a Visual Studio 2022 project configured to build the library as a Dynamic-Link Library (DLL).

**Author:** Rishikesh Venkat Shinde  
**Version:** 1.0.0  

---

## 🌟 Overview

This project provides a robust collection of the most commonly used data structures and algorithms, all implemented in a generic, template-based fashion. This allows them to be used with any data type (`int`, `float`, `char`, `double`, or custom objects) without modification.

The primary way to use this library is by directly including the `Generilized_DS_Toolkit.h` header file. For developers on Windows, a pre-configured Visual Studio solution is provided to compile a `.dll` for specific data types.

## ✨ Features

The toolkit is organized into several key components:

### 1. Core Data Structures

A robust implementation of various linear and non-linear data structures.

| Structure                   | Description                                          | Key Operations                                           |
| --------------------------- | ---------------------------------------------------- | -------------------------------------------------------- |
| **SinglyLL** | Singly Linear Linked List                            | `InsertFirst`, `InsertLast`, `InsertAtPos`, `Delete...`  |
| **DoublyLL** | Doubly Linear Linked List                            | `InsertFirst`, `InsertLast`, `InsertAtPos`, `Delete...`  |
| **SinglyCLL** | Singly Circular Linked List                          | `InsertFirst`, `InsertLast`, `InsertAtPos`, `Delete...`  |
| **DoublyCLL** | Doubly Circular Linked List                          | `InsertFirst`, `InsertLast`, `InsertAtPos`, `Delete...`  |
| **StackX** | LIFO Stack (implemented using a linked list)         | `Push`, `Pop`                                            |
| **QueueX** | FIFO Queue (implemented using a linked list)         | `Enqueue`, `Dequeue`                                     |
| **BST** | Binary Search Tree                                   | `Insert`, `Search`, `CountLeaf`, `CountParent`           |

### 2. Algorithms

Implementations of fundamental sorting and searching algorithms operating on arrays.

| Class       | Algorithm             | Description                                          |
| ----------- | --------------------- | ---------------------------------------------------- |
| **ArrayX** | **Bubble Sort** | Simple comparison-based sorting algorithm.           |
|             | **Selection Sort** | In-place comparison sort.                            |
|             | **Insertion Sort** | Builds the final sorted array one item at a time.    |
| **ArrayXX** | **Linear Search** | Sequential search for an element.                    |
|             | **Binary Search** | Efficiently finds an item in a **sorted** array.     |

### 3. Specialized Utility Classes

These classes are built upon the linked list structure to perform specific data analysis tasks.

| Class                 | Description                                                  | Key Operations                                                   |
| --------------------- | ------------------------------------------------------------ | ---------------------------------------------------------------- |
| **DataSequence** | Performs basic statistical analysis on a list of elements.   | `FindFirst`, `FindLast`, `Aggregate (Sum)`, `FindMax`, `FindMin` |
| **NumericCollection** | Performs number-theoretic analysis on a list of integers.    | `DisplayPerfect`, `DisplayPrime`, `SumEven`, `SecondLargest`     |
| **DigitAnalyzer** | Performs digit-level manipulation and analysis of integers.  | `DisplayReverse`, `DisplayPalindrome`, `DisplaySmallestDigits`   |

## 🚀 How to Use (Header-Only Method)

The simplest way to use this library is to include the `Generilized_DS_Toolkit.h` file directly in your project.

### Example

```cpp
#include <iostream>
#include "Generilized_DS_Toolkit.h" // Make sure the header is accessible

int main()
{
    // Create an instance of DoublyLL for integers
    DoublyLL<int> list;

    // Insert elements
    list.InsertFirst(50);
    list.InsertLast(60);
    list.InsertAtPos(55, 2);

    // Display the list
    std::cout << "List contents: ";
    list.Display(); // Expected output: NULL<=>| 50 |<=>| 55 |<=>| 60 |<=>NULL

    // Display the count
    std::cout << "Number of nodes: " << list.Count() << std::endl; // Expected output: 3

    return 0;
}

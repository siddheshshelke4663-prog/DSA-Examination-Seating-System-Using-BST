Examination Seating System Using Binary Search Tree (BST)

1. Aim

To develop an Examination Seating System using a Binary Search Tree (BST), construct the tree from a given preorder sequence, and display its inorder and level-order traversals.

2. Problem Statement

Develop an examination seating system using a BST. Construct the tree from a given preorder sequence and display its inorder and level-order traversals.

3. Description

This project implements a Binary Search Tree using C++. The program accepts a sequence of student roll numbers in preorder format and constructs the corresponding BST.

After constructing the tree, the program displays:

- Inorder Traversal: Visits the left subtree, root, and right subtree.
- Level-order Traversal: Visits nodes level by level from left to right.

The roll numbers represent student identifiers used to demonstrate the organization of students in a tree structure.

4. Objectives

- To understand the Binary Search Tree data structure.
- To construct a BST from a given preorder sequence.
- To perform inorder traversal.
- To perform level-order traversal using a queue.
- To understand tree construction and traversal algorithms.

5. Technologies Used

- Programming Language: C++
- Data Structure: Binary Search Tree
- Header Files: "iostream", "queue", "vector", "climits"
- Compiler: Any C++11-compatible compiler

6. Features

1. Accepts the number of students.
2. Accepts student roll numbers in preorder sequence.
3. Constructs a BST directly from the preorder sequence.
4. Displays inorder traversal.
5. Displays level-order traversal.
6. Detects invalid BST preorder sequences.
7. Handles non-positive student counts.

7. Data Structure Used

Binary Search Tree (BST)

A BST is a binary tree in which:

- Values smaller than the root are placed in the left subtree.
- Values greater than the root are placed in the right subtree.
- Each node contains a roll number and pointers to its left and right children.

This implementation assumes all roll numbers are unique.

8. Algorithm

Step 1: Input

Read the number of students and their preorder sequence of roll numbers.

Step 2: Construct the BST

Use the first valid value as the root. Recursively construct the left and right subtrees according to the BST ordering rules and valid value ranges.

Step 3: Validate the Sequence

Check whether all input values were consumed during construction. If not, display an invalid preorder sequence message.

Step 4: Inorder Traversal

Visit the left subtree, print the root, and visit the right subtree.

Step 5: Level-order Traversal

Use a queue to visit nodes level by level, adding each node's left and right children to the queue.

Step 6: Display Results

Print both traversal sequences.

9. Sample Input

Enter number of students: 5
Enter preorder sequence of roll numbers: 12 10 9 11 13

10. Sample Output

Inorder Traversal: 9 10 11 12 13
Level-order Traversal: 12 10 13 9 11

11. Explanation of Output

The preorder sequence creates the following BST:

        12
       /  \
     10    13
    /  \
   9    11

Inorder Traversal: "9 10 11 12 13"

The nodes are visited in left-root-right order. For a BST with unique values, inorder traversal displays values in ascending order.

Level-order Traversal: "12 10 13 9 11"

The nodes are visited level by level, from left to right.

12. Time and Space Complexity

Let "n" be the number of student roll numbers.

- BST Construction: O(n) in the average case for this direct preorder construction algorithm.
- Inorder Traversal: O(n).
- Level-order Traversal: O(n).
- Auxiliary Space: O(n) for the tree and traversal queue in the worst case.

The recursive construction and inorder traversal can use O(n) stack space in the worst case.

13. Applications

- Demonstrating student roll-number organization.
- Understanding hierarchical data structures.
- Practising tree construction and traversal algorithms.
- Learning how queues support level-order traversal.

14. Limitations

- The program demonstrates BST organization; it does not assign physical examination hall seats.
- All roll numbers must be unique.
- The tree is maintained in memory only; data is not saved permanently.
- No graphical interface or database is included.

15. How to Compile and Run

Save the source code as "main.cpp".

Compile

g++ -std=c++11 main.cpp -o examination

Run on Linux or online compilers

./examination

On Windows, run the generated "examination.exe" file.

Enter the number of students followed by the preorder sequence. Use spaces between roll numbers, not commas.

16. Conclusion

This project demonstrates how to construct a Binary Search Tree directly from a preorder sequence and perform inorder and level-order traversals using C++. It helps develop an understanding of tree structures, recursion, queues, and traversal algorithms.

17. Future Enhancements

- Add student names along with roll numbers.
- Assign actual examination hall and seat numbers.
- Display the BST graphically.
- Store student information in a file or database.
- Add search functionality for student roll numbers.# DSA-Examination-Seating-System-Using-BST

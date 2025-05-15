# Homework 1 - Insertions with Multiple Rotations

## Overview
I will insert a sequence of integers into an AVL tree and analyze the rebalancing process. Each sequence is 
designed to trigger multiple rotations, including single and double rotations. The task is to:

- Construct the AVL tree for each set of values (by drawing it).
- Determine where imbalances occur.
- Identify and perform the necessary rotations to maintain AVL balance.
- Document the final tree structure.

## Type of Rotations:

- **Left-Left Rotation:** Occurs when a node is inserted into the left subtree of the left child, 
causing an imbalance with a balance factor of +2.
  - Soultion: Perform a **single right rotation**.

### Given
```plaintext
     A
    /
   B
  /
 C 
```
### After the Rotation
```plaintext
     B
    / \
   C   A
  
```
-----------------------------------------------------------------------------------

- **Left-Right Rotation:** Occurs when a node is inserted into the right subtree of the left child, 
causing an imbalance with a balance factor of +2.
  - Soultion: Perform a **double rotation** by starting with a left rotation 
on the left child, followed by a right rotation on the unbalanced node.

### Given
```plaintext
     A
    /
   B
    \
     C 
```
### First the Left Rotation
```plaintext
     A
    /
   C
  /
 B 
```

### Then the Right Rotation
```plaintext
     C
    / \
   B   A
  
```
------------------------------------------------------------------------------------

- **Right-Left Rotation:** Occurs when a node is inserted into the left subtree of the right child, 
causing an imbalance with a balance factor of -2.
  - Soultion: Perform a **double rotation** by starting with a right rotation 
on the right child, followed by a left rotation on the unbalanced node.

### Given
```plaintext
     A
      \
       B
      /
     C 
```

### First the Right Rotation
```plaintext
     A
      \
       C
        \
         B
```

### Then the Left Rotation
```plaintext
     C
    / \
   A   B
  
```
------------------------------------------------------------------------------------

- **Right-Right Rotation:** Occurs when a node is inserted into the right subtree of the right child,
 causing an imbalance with a balance factor of -2.
  - Soultion: Perform a **single left rotation**.

 ### Given
```plaintext
     A
      \
       B
        \
         C 
```

### After the Rotation
```plaintext
     B
    / \
   A   C
```

-------------------------------------------------------------------------------------

# Set of Examples:

## Set 1
This example will be performing Left-Right and Right-Left Rotations.

- Insert the following values in order:
10, 20, 30, 15, 25, 5, 35, 27

Steps and Answer Key [here](https://github.com/aaniaahh/Algorithms/blob/main/assignments/H01/set1.md)

## Set 2
This example will be performing Multiple Rotations in Different Branches.

- Insert the following values in order:
50, 40, 45, 60, 55, 70, 35, 30, 65, 75, 43

Steps and Answer Key [here](https://github.com/aaniaahh/Algorithms/blob/main/assignments/H01/set2.md)

## Set 3
This example will be performing Alternating Insertions Causing Frequent Rebalancing.

- Insert the following values in order:
100, 90, 110, 80, 95, 85, 105, 120, 102, 108

Steps and Answer Key [here](https://github.com/aaniaahh/Algorithms/blob/main/assignments/H01/set3.md)


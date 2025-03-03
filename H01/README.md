# Homework 1 - Insertions with Multiple Rotations

## Overview
I will insert a sequence of integers into an AVL tree and analyze the rebalancing process. Each sequence is 
designed to trigger multiple rotations, including single and double rotations. The task is to:

- Construct the AVL tree for each set of values (by drawing it).
- Determine where imbalances occur.
- Identify and perform the necessary rotations to maintain AVL balance.
- Document the final tree structure.

## Types of Rotations
- **Left-Left Rotation:** Occurs when a node is inserted into the left subtree of the left child, 
causing an imbalance with a balance factor of +2.

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
---------------------------------------------------------------------------------------

- **Left-Right Rotation:** Occurs when a node is inserted into the right subtree of the left child, 
causing an imbalance with a balance factor of +2.

### Given
```plaintext
     A
    /
   B
    \
     C 
```
### The Left Rotation
```plaintext
     A
    /
   C
  /
 B 
```

### The Right Rotation
```plaintext
     C
    / \
   B   A
  
```


- **Right-Left Rotation:** Occurs when a node is inserted into the left subtree of the right child, 
causing an imbalance with a balance factor of -2.

### Given
```plaintext
     A
      \
       B
       /
      C 
```

### The Right Rotation
```plaintext
     A
      \
       C
        \
         B
```

### The Left Rotation
```plaintext
     C
    / \
   A   B
  
```


- **Right-Right Rotation:** Occurs when a node is inserted into the right subtree of the right child,
 causing an imbalance with a balance factor of -2.

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


# Examples:

## Set 1
This example will be performing Left-Right and Right-Left Rotations.

- Insert the following values in order:
10, 20, 30, 15, 25, 5, 35, 27

Steps and Answer Key [here]()

## Set 2
This example will be performing Multiple Rotations in Different Branches.

- Insert the following values in order:
50, 40, 45, 60, 55, 70, 35, 30, 65, 75, 43

Steps and Answer Key [here]()

## Set 3
This example will be performing Alternating Insertions Causing Frequent Rebalancing.

- Insert the following values in order:
100, 90, 110, 80, 95, 85, 105, 120, 102, 108

Steps and Answer Key [here]()
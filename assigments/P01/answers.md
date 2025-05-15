## Use 20, 15, 25, 10, 5, 1, 30, 35, 40, 45

Let R = Red and B = Black

### Insert 20
- The root is **always** black.

```plaintext
20(B)
```
### Insert 15
- 15 < 20, so insert as 20's red left child

```plaintext
      20(B)
     /
   15(R)
```

### Insert 25
- 25 > 20, so insert as 20's red right child

```plaintext
      20(B)
     /    \
   15(R)  25(R)
```

- Leafs are red? VIOLATION!
  - Recolor 15 and 25 to black
  - Recolor 20 to red

```plaintext
      20(R)
     /    \
   15(B)  25(B)
```

- Root is red? VIOLATION!
  - Recolor 20 back to black.

```plaintext
      20(B)
     /    \
   15(B)  25(B)
```

### Insert 10
- 10 < 15, so insert as 15's red left child

```plaintext
          20(B)
         /    \
       15(B)  25(B)
       /
      10(R) 
```

### Insert 5
- 5 < 10, so insert as 10's red left child

```plaintext
            20(B)
           /    \
         15(B)  25(B)
         /
       10(R) 
       /
     5(R)
```

- Heavy Left? VIOLATION!
  - Left Rotation Needed

```plaintext
            20(B)
           /    \
         10(R)  25(B) 
         /  \
      5(R)  15(B)
```

- Red Child with Red Parent? VIOLATION
  - Recolor 10 to black
  - Recolor 15 to red

```plaintext
            20(B)
           /    \
         10(B)  25(B) 
         /  \
      5(R)  15(R)
```

### Insert 1
- 1 < 5, so insert as 5's red right child

```plaintext
            20(B)
           /    \
         10(B)  25(B) 
         /  \
      5(R)  15(R)
       /
     1(R) 
```

- Red Child with Red Parent? VIOLATION
  - Recolor 5 and 15 to black
  - Recolor 10 to red

```plaintext
            20(B)
           /    \
         10(R)  25(B) 
         /  \
      5(B)  15(B)
       /
     1(R) 
```

### Insert 30
- 30 > 25, so insert as 25's red right child

```plaintext
               20(B)
              /     \
          10(R)      25(B) 
           /  \         \
        5(B)   15(B)     30(R)
        /
     1(R) 
```

### Insert 35
- 35 > 30, so insert as 30's red right child

```plaintext
               20(B)
              /     \
          10(R)      25(B) 
           /  \         \
        5(B)   15(B)     30(R)
        /                  \
     1(R)                  35(R)
```
- Heavy Right? VIOLATION!
  - Right Rotation Needed

```plaintext
                 20(B)
               /      \
          10(R)        30(R) 
          /  \         /   \
       5(B)  15(B)  25(B)   35(R)
        /                 
     1(R)                 
```

- Red Child with Red Parent? VIOLATION!
  - Recolor 30 to Black
  - Recolor 25 to Red

```plaintext
                 20(B)
               /      \
          10(R)        30(B) 
          /  \         /   \
       5(B)  15(B)  25(R)   35(R)
        /                 
     1(R)                 
```

### Insert 40
- 40 > 35, so insert as 35's red right child

```plaintext
                 20(B)
               /      \
          10(R)        30(B) 
          /  \         /   \
       5(B)  15(B)  25(R)   35(R)
        /                     \
     1(R)                     40(R)
```

- Red Child with Red Parent? VIOLATION!
  - Recolor 35 to Black
  - Recolor 25 to Black
  - Recolor 30 to Red

```plaintext
                 20(B)
               /      \
          10(R)        30(R) 
          /  \         /   \
       5(B)  15(B)  25(B)   35(B)
        /                     \
     1(R)                     40(R)
```

### Insert 45
- 45 > 40, so insert as 40's red right child

```plaintext
                 20(B)
               /      \
          10(R)        30(R) 
          /  \         /   \
       5(B)  15(B)  25(B)   35(B)
        /                     \
     1(R)                     40(R)
                                 \ 
                                  45(R)
```

- Heavy Right? VIOLATION!
  - Right Rotation Needed

```plaintext
                 20(B)
               /       \
           10(R)       30(R) 
           /  \         /    \
        5(B)  15(B)  25(B)   40(R)
        /                    /  \
     1(R)                35(B)   45(R)
```

- Red Child with Red Parent? VIOLATION!
  - Recolor 40 to Black
  - Recolor 35 to Red

```plaintext
                 20(B)
               /       \
           10(R)       30(R) 
           /  \         /    \
        5(B)  15(B)  25(B)   40(B)
        /                    /  \
     1(R)                35(R)   45(R)
```
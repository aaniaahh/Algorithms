## Use 20, 15, 25, 10, 5, 1, 30, 35, 40, 45

Let R = Red and B = Black

### Insert 20
- The new root is **always** black.

```plaintext
20(B)
```
### Insert 15
- 15 < 20, insert as a red left child

```plaintext
      20(B)
     /
   15(R)
```

### Insert 25
- 25 > 20, insert as red right child

```plaintext
      20(B)
     /    \
   15(R)  25(R)
```

- Both children are red so recolor 15 and 25 to black
- Recolor 20 to red

```plaintext
      20(R)
     /    \
   15(B)  25(B)
```

- Root is always black so recolor 20 back to black.

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
### Insert 1
### Insert 30
### Insert 40
### Insert 45
## Exercise 2: Closed Hashing (Open Addressing)
**May be harder to view with dark mode!!**

Given the following set of keys: **5, 22, 17, 18, 35, 101, 16, 0, 8**

- Initially create a hash table with size 10:
<img src= "./images/21.png" width="200">

- 5 mod 10 = 5
  - place 5 into the index 5
<img src= "./images/22.png" width="200">

- 22 mod 10 = 2
  - place 22 into the index 2
<img src= "./images/23.png" width="200">

- 17 mod 10 = 7
  - place 17 into the index 7
<img src= "./images/24.png" width="200">

- 18 mod 10 = 8
  - place 18 into the index 8
<img src= "./images/25.png" width="200">

- 35 mod 10 = 5
  - index 5 is occupied so the next index available is 6
  - place 35 into the index 6  
<img src= "./images/26.png" width="200">

- 101 mod 10 = 1
  - place 101 into the index 1
<img src= "./images/27.png" width="200">

- 16 mod 10 = 6
  - index 6, 7, and 8 is occupied so the next index available is 9 
  - place 16 into the index 9  
<img src= "./images/28.png" width="200">

- 0 mod 10 = 0
  - place 0 into the index 0
<img src= "./images/29.png" width="200">

- 8 mod 10 = 8
  - index 8, 9, 0, 1, and 2 are occupied so the next index available is 3
  - place 8 into the index 3
<img src= "./images/30.png" width="200">
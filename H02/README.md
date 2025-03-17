# Hashing - Strategies and Collison Resolution

## What is hashing?
- Hashing is simply passing some data through a formula or function that produces a result,
called a **hash**.
  - Hash is a value that is used to represent the data in some manner.

## Hashing Terms
- **Collision:** When a hash function returns the same key for multiple distinct input items. 
  - *The goal is to avoid this, but it is mostly unavoidable*

- **Collision Resolution:** A way of handling collisions. 
  - Open (chaining):
  - Closed (open addressing):

- **Hash Function:** A function *H* that receives some input *x*, and turns it into an integr value *i*. The returned integer value can be adjusted to fit an array by using modulus.
  - *H(x) = i % array_size*

- **Hash Table:** An array which keys are mapped to array positions by a hash function

-**Key:** The value returned by a hash function *aka an array index*, and in some contexts this value must be unique.

- **Load Factor:** The number of elements in a hash table divided by the number of slots. 
  - Usually denoted as "α" alpha.  

- **Perfect Hashing:** Every input items gets a perfectly unique key.
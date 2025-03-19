# Hashing - Strategies and Collison Resolution

## What is hashing?
- Hashing is simply passing some data through a formula or function that produces a result,
called a **hash**.
  - Hash is a value that is used to represent the data in some manner.

## Hashing Terms
- **Collision:** When a hash function returns the same key for multiple distinct input items. 
  - *The goal is to avoid this, but it is mostly unavoidable*

- [**Collision Resolution:**](https://github.com/aaniaahh/Algorithms/blob/main/H02/colliresol.md) A way of handling collisions. 
  - **Open (chaining)** places the hashed value in a list **pointed to** by the hash table.
  - **Closed (open addressing)** places the hashed value **in** the hash table.

- **Hash Function:** A function *H* that receives some input *x*, and turns it into an integer value *i*. The returned integer value can be adjusted to fit an array by using modulus.
  - *H(x) = i % array_size*

- **Hash Table:** An array which keys are mapped to array positions by a hash function

- **Key:** The value returned by a hash function *aka an array index*, and in some contexts this value must be unique.

- **Load Factor:** The number of elements in a hash table divided by the number of slots. 
  - Usually denoted as "α" alpha.  

- **Perfect Hashing:** Every input items gets a perfectly unique key.

## Examples
### Exercise 1: Open Hashing (Separate Chaining)
Given the following set of keys:

5,22,17,18,35,101,16,0,8

- Task:
i. Assume a hash table size of 10.
ii. Use the division method hash function: h(k) = k mod 10.
iii. Insert the keys in the given order using separate chaining (each table slot holds a linked list of entries).
iv. Draw a diagram showing the hash table buckets and the contents of each bucket after all insertions.
v. Identify any buckets with collisions and note how many elements are stored in each.

### Exercise 1: Closed Hashing (Open Addressing)
Using the same set of keys:

5,22,17,18,35,101,16,0,8

- Task:
i. Assume a hash table size of 10.
ii. Use the same hash function: h(k) = k mod 10.
iii. Insert the keys in the given order using linear probing for collision resolution.
iv. Draw a diagram of the hash table showing the index positions and the key stored at each index.
v. Discuss any clustering effects you observe.
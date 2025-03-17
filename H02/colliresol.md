# Overview
Below will provide more details on Collision Resolution

## Open (Chaining) Resolution
- If no list exist, it creates one. If one does exist, it adds it ot the end.

### Direct Chaining
- A resolution which the hash table is an array of links to lists. Each list holds all the items with the same
hash value.

### Separate Chaining
- A resolution which each position in the hash table has a list to handle collisions. Each position may be a direct chaining or may be sn item and a link *essentially the head of the list*. In the latter, one item is in the table and other colliding items are in the list.

## Closed (Open Addressing) Resolution
- If the slot is open, it'll go there. If not, it finds a place in the hash table.
  - Using a **probe sequence** to find the next open slot.

### Linear Probing

### Quadratic Probing

### Double Hashing

### Pseudo Random Probing
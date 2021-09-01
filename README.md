# Implementing-Double-Hashing-

## Double hashing: 
It is a collision resolving technique in Open Addressed Hash tables. Double hashing uses the idea of applying a second hash function to key when a collision occurs.

Double hashing can be done using :
(hash1(key) + i * hash2(key)) % TABLE_SIZE
Here hash1() and hash2() are hash functions and TABLE_SIZE
is size of hash table. (We repeat by increasing i when collision occurs)

## Output:
![image](https://user-images.githubusercontent.com/69696459/131702297-99d1dd1a-bfba-4875-b4be-a0159df2bd51.png)


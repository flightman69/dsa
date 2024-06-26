# What is Hash Table ?
  Hash table is a way to store key, value pair efficently. It uses hash function to convert keys into a fixed size array with seperate index.

# Components of Hashing:
  1. Key:
    - A key can be anything, string or integer which is fed as input in the hash function.
  2. Hash Function:
    - The function that takes key as input and returns hash code which is an integer. The hash code is used to determine the index at which the key-value pair should be stored in the array.
  3. Hash table:
    - Hash Table is a data structure that maps keys to values using a hash function. 

# Types of Hashing functions:
  - Division Method
  - Mid Square Method
  - Folding Method
  - Multiplication method

# Complexity of calculating hash value using the hash function
  - Time Complexity: O(N)
  - Space Complexity: O(1)

# What is Collision in Hashing?
  Collision in Hashing occurs when two different keys map to the same hash value 

# How to handle Collisions?
  1. seperate Chaining
  2. Open Addressing
    - ![collision resolutioon techiques](https://media.geeksforgeeks.org/wp-content/uploads/20240514124402/Collision-Resolution-Techniques.webp)



# Language Data Structures Fundamentals (C++)

## Introduction

For this task, I completed the assigned STL and Data Structures learning resources. I explored the most commonly used C++ containers and practiced their basic operations.

---

## Vector

Vector was the first STL container I learned. It feels similar to an array, but the main difference is that it can grow automatically when new elements are added.

Some functions I practiced:

- push_back()
- pop_back()
- size()
- front()
- back()

Example:

```cpp
vector<int> nums;

nums.push_back(10);
nums.push_back(20);
```

What I learned:

- Accessing elements is very fast.
- Adding elements at the end is efficient.
- Searching still requires checking elements one by one.

---

## Stack

A stack follows the Last In First Out (LIFO) principle.

A simple example is a stack of plates. The last plate placed on top is removed first.

Functions I practiced:

- push()
- pop()
- top()

Example:

```cpp
stack<int> st;

st.push(10);
st.push(20);

cout << st.top();
```

What I learned:

- Insertion and removal happen from one side only.
- Push and pop operations are very fast.

---

## Queue

A queue follows the First In First Out (FIFO) principle.

A real-life example is people standing in a line. The first person who enters the line is served first.

Functions I practiced:

- push()
- pop()
- front()
- back()

Example:

```cpp
queue<int> q;

q.push(10);
q.push(20);

q.pop();
```

What I learned:

- Elements are added at the back.
- Elements are removed from the front.

---

## Set

A set stores only unique values.

When I inserted duplicate values, they were automatically ignored.

Functions I practiced:

- insert()
- erase()
- find()

Example:

```cpp
set<int> s;

s.insert(5);
s.insert(5);
s.insert(10);
```

Output:

```text
5 10
```

What I learned:

- Duplicates are not allowed.
- Elements remain sorted.

---

## Unordered Set

An unordered set also stores unique values, but it uses hashing.

Example:

```cpp
unordered_set<int> us;

us.insert(5);
us.insert(10);
```

What I learned:

- Lookups are usually faster than a normal set.
- Elements are not stored in sorted order.

---

## Map

A map stores data as key-value pairs.

Example:

```cpp
map<string,int> marks;

marks["Ali"] = 90;
marks["Sara"] = 95;
```

What I learned:

- Data can be accessed using keys.
- Keys remain sorted.

---

## Unordered Map

This was one of the most useful containers I learned.

It also stores key-value pairs, but uses hashing internally.

Example:

```cpp
unordered_map<string,int> marks;

marks["Ali"] = 90;
marks["Sara"] = 95;
```

What I learned:

- Lookups are usually very fast.
- Data is not stored in sorted order.

---

## Iteration Practice

I practiced iterating over different containers using loops.

Vector:

```cpp
for(int n : nums)
{
    cout << n << " ";
}
```

Set:

```cpp
for(int n : s)
{
    cout << n << " ";
}
```

Unordered Map:

```cpp
for(auto pair : marks)
{
    cout << pair.first << " -> " << pair.second << endl;
}
```

---

## Time Complexity Notes

From the STL video and also watch time complexity from abdul bar, I learned that different containers provide different performance.

My understanding:

- Vector provides fast indexing.
- Stack and Queue provide constant-time insertion and removal.
- Set and Map use trees, so operations are usually O(log n).
- Unordered Set and Unordered Map use hashing, so lookups are usually O(1) on average.

---

## Data Structures Concepts

Along with STL, I also studied the basic data structure concepts.

### Array

Stores elements in contiguous memory locations.

What I noticed:

- Very fast access using index.
- Fixed size.

### Linked List

Stores data using connected nodes.

What I noticed:

- Dynamic size.
- Easier insertion and deletion compared to arrays.

### Stack

Uses the LIFO principle.

### Queue

Uses the FIFO principle.

---

## What I Learned

Before this task, I only had basic knowledge of arrays. After completing the STL and Data Structures resources, I learned how vectors, stacks, queues, sets, maps, and hash maps work in C++.

The biggest challenge for me was understanding the difference between ordered and unordered containers. Learning about hashing and time complexity helped me understand why different containers are used for different situations.

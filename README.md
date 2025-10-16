# Project 3 — Reverse a Singly Linked List (C++)

## Overview
Implement `LinkedList::reverse()` to reverse the list in place with O(n) time and O(1) extra space.

**Learning goals**
- Pointer rewiring
- In-place transformations
- Iteration on linked structures

## Files
```
include/LinkedList.hpp   # interface
src/LinkedList.cpp       # your changes here (reverse)
tests/tests.cpp          # unit tests
Makefile
```

## Your task
Replace the TODO with a standard iterative reversal:
```cpp
Node* prev = nullptr;
Node* curr = head_;
while (curr) {
  Node* next = curr->next;
  curr->next = prev;
  prev = curr;
  curr = next;
}
head_ = prev;
```

## Build, Test, and Submit

### 1) Build & test locally
```bash
make
make test
```

### 2) Submit:
- Commit & push to trigger autograding (Actions tab shows logs).
```bash
make submit
```

### 3) Submit to GitHub Classroom
```bash
git add -A
git commit -m "submit"
git push
```

## What we test
- Correct reversal for non-empty lists
- Correct behavior for empty / single-node lists
- No memory leaks (destructor intact)

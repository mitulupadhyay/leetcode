# 0509 — Fibonacci Number

**LeetCode #509 · Easy**

## Problem Statement

Given an integer `n`, calculate and return the `n`th Fibonacci number.

The Fibonacci sequence is defined as:

```text
F(0) = 0
F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1
```

### Examples

```text
Input: n = 2

Output: 1
```

```text
Input: n = 3

Output: 2
```

```text
Input: n = 4

Output: 3
```

---

## Approach

The approach is to **calculate the Fibonacci numbers iteratively while storing only the previous two values**.

Instead of using recursion or storing the complete Fibonacci sequence, only two variables are maintained:

* `prev2` stores the Fibonacci number two positions behind.
* `prev1` stores the Fibonacci number from the previous position.
* `current` stores the newly calculated Fibonacci number.

### Steps

1. Handle the base cases where `n` is `0` or `1`.
2. Initialize `prev2 = 0` and `prev1 = 1`.
3. Start iterating from `2` up to `n`.
4. Calculate the current Fibonacci number as `prev1 + prev2`.
5. Move `prev2` to `prev1`.
6. Move `prev1` to `current`.
7. After the loop, `prev1` contains `F(n)`.
8. Return `prev1`.

### Example

For `n = 6`:

```text
F(0) = 0
F(1) = 1

F(2) = 1
F(3) = 2
F(4) = 3
F(5) = 5
F(6) = 8
```

Therefore:

```text
F(6) = 8
```

---

## Complexity Analysis

* **Time Complexity:** `O(n)` — The Fibonacci sequence is calculated from `2` to `n`.

* **Space Complexity:** `O(1)` — Only a constant number of variables are used.

---

## Key Concepts

* Fibonacci sequence
* Iterative approach
* Maintaining previous two values
* Constant-space optimization
* Time and space complexity analysis

---

**LeetCode:** [509. Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)

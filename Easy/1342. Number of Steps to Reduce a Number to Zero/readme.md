# 1342. Number of Steps to Reduce a Number to Zero

**Problem Link:** [https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/](https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/)

## Problem Summary

Given an integer `num`, return the number of steps required to reduce it to `0`.

In each step:

- If `num` is even, divide it by `2`.
- If `num` is odd, subtract `1` from it.

Continue until `num` becomes `0`.

## Approach

Use a **while loop** to repeatedly perform the required operation.

- Check whether the number is even using the modulo operator `%`.
- If it is even, divide it by `2`.
- Otherwise, subtract `1`.
- Increment the step counter after each operation.
- Continue until the number becomes `0`.

## Algorithm

1. Initialize `steps = 0`.
2. Continue while `num > 0`.
3. If `num` is even, divide it by `2`.
4. Otherwise, subtract `1` from `num`.
5. Increment `steps`.
6. Return `steps`.

## Time Complexity

- **O(log n)** — The number is repeatedly divided by `2`, reducing its size quickly.

## Space Complexity

- **O(1)** — Only a constant number of variables are used.

## Concepts Used

- While Loop
- If-Else Conditions
- Modulo Operator `%`
- Integer Division
- Basic Arithmetic
- Counting Operations
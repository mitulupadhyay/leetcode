# 1295. Find Numbers with Even Number of Digits

**Problem Link:** [https://leetcode.com/problems/find-numbers-with-even-number-of-digits/](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/)

## Problem Summary

Given an integer array `nums`, return the number of elements that contain an even number of digits.

## Approach

Traverse the array and count the number of digits in each element.

- Extract digits by repeatedly dividing the number by `10`.
- Count the number of digits.
- Check whether the digit count is even.
- If it is even, increment the result counter.

## Algorithm

1. Initialize `count = 0`.
2. Traverse each element of the array.
3. Store the current number in a temporary variable `num`.
4. Initialize `digits = 0`.
5. While `num > 0`:
   - Divide `num` by `10`.
   - Increment `digits`.
6. If `digits` is even, increment `count`.
7. Return `count`.

## Time Complexity

- **O(n × d)** — Each of the `n` numbers is processed digit by digit, where `d` is the maximum number of digits.

## Space Complexity

- **O(1)** — Only a constant number of variables are used.

## Concepts Used

- Arrays
- For Loop
- While Loop
- Digit Counting
- Integer Division `/`
- Modulo Operator `%`
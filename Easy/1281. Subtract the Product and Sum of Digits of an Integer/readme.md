# 1281. Subtract the Product and Sum of Digits of an Integer

**Problem Link:** [https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/)

## Problem Summary

Given an integer `n`, return the difference between the product of its digits and the sum of its digits.

## Approach

Extract each digit of the number using the modulo operator `%`.

- Add each digit to `sum`.
- Multiply each digit with `product`.
- Remove the last digit using integer division `/`.
- Finally, return the product minus the sum.

## Algorithm

1. Initialize `sum = 0`.
2. Initialize `product = 1`.
3. While `n > 0`:
   - Extract the last digit using `n % 10`.
   - Add the digit to `sum`.
   - Multiply the digit with `product`.
   - Remove the last digit using `n / 10`.
4. Return `product - sum`.

## Time Complexity

- **O(log n)** — Each digit of `n` is processed once.

## Space Complexity

- **O(1)** — Only a constant number of variables are used.

## Concepts Used

- While Loop
- Modulo Operator `%`
- Integer Division `/`
- Digit Extraction
- Basic Arithmetic
- Sum and Product
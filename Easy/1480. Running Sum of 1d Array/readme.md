# 1480. Running Sum of 1d Array

**Problem Link:** https://leetcode.com/problems/running-sum-of-1d-array/

## Problem Summary
Given an integer array `nums`, return an array where each element is the sum of all previous elements including itself.

## Approach
- Initialize a variable `sum` to `0`.
- Traverse the array from left to right.
- Add each element to `sum`.
- Store the updated `sum` in the answer vector.

## Algorithm
1. Initialize `sum = 0`.
2. Create an empty vector `ans`.
3. Iterate through each element in `nums`.
4. Add the current element to `sum`.
5. Push `sum` into `ans`.
6. Return `ans`.

## Time Complexity
- **O(n)**

## Space Complexity
- **O(n)**

## Concepts Used
- Arrays
- Vector
- Prefix Sum (Running Sum)
- For-each Loop
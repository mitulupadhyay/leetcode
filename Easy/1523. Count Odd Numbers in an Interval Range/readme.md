# 1523. Count Odd Numbers in an Interval Range

**Problem Link:** [https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/)

## Problem Summary

Given two non-negative integers `low` and `high`, return the number of odd integers between `low` and `high`, inclusive.

## Approach

Use a mathematical formula instead of checking every number in the range.

The number of odd integers from `0` to `x` is:

```text
(x + 1) / 2
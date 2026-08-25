# 344. Reverse String

**Problem Link:** [https://leetcode.com/problems/reverse-string/](https://leetcode.com/problems/reverse-string/)

## Problem Summary

Given a character array `s`, reverse the string by modifying the input array **in-place**.

The solution must use **O(1) extra memory**.

## Approach

Use two pointers:

- `left` starts from the beginning of the array.
- `right` starts from the end of the array.
- Swap the characters at `left` and `right`.
- Move `left` forward and `right` backward.
- Continue until the two pointers meet.

## Algorithm

1. Initialize `left = 0`.
2. Initialize `right = s.size() - 1`.
3. While `left < right`:
   - Swap `s[left]` and `s[right]`.
   - Increment `left`.
   - Decrement `right`.
4. Stop when `left` is no longer less than `right`.

## Example

For:

```text
s = ["h","e","l","l","o"]
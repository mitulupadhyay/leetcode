# 125. Valid Palindrome

**Problem Link:** [https://leetcode.com/problems/valid-palindrome/description/](https://leetcode.com/problems/valid-palindrome/description/)

## Problem Summary

Given a string `s`, determine whether it is a palindrome after:

- Converting uppercase letters to lowercase.
- Removing all non-alphanumeric characters.

A palindrome reads the same forward and backward.

## Approach

Use the **two-pointer approach**.

- Initialize one pointer at the beginning of the string.
- Initialize another pointer at the end of the string.
- Skip non-alphanumeric characters from both sides.
- Compare the characters after converting them to lowercase.
- If any pair of characters does not match, return `false`.
- If all valid characters match, return `true`.

## Algorithm

1. Initialize `left = 0`.
2. Initialize `right = s.length() - 1`.
3. Continue while `left < right`.
4. If `s[left]` is not alphanumeric, increment `left`.
5. If `s[right]` is not alphanumeric, decrement `right`.
6. Convert both characters to lowercase and compare them.
7. If they are different, return `false`.
8. Move `left` forward and `right` backward.
9. If all characters match, return `true`.

## Time Complexity

- **O(n)** — Each character is processed at most once.

## Space Complexity

- **O(1)** — Only two pointer variables are used.

## Concepts Used

- Strings
- Two Pointers
- `isalnum()`
- `tolower()`
- Case-insensitive comparison
- Palindrome
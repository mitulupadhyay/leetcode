# 0009 — Palindrome Number

**LeetCode #9 · Easy**

## Problem Statement

Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

A palindrome number reads the same from left to right and right to left.

### Examples

```text
Input: x = 121
Output: true
```

```text
Input: x = -121
Output: false
```

```text
Input: x = 10
Output: false
```

---

## Approach

The approach is to **reverse the digits of the number** and compare the reversed number with the original number.

### Steps

1. Store the original value of `x` in a temporary variable.
2. Initialize a variable `rev` to `0` to store the reversed number.
3. Extract the last digit using the modulo operator (`% 10`).
4. Add the extracted digit to `rev`.
5. Remove the last digit from `x` using integer division (`/ 10`).
6. Repeat until all digits have been processed.
7. Compare the reversed number with the original number.
8. If both are equal, the number is a palindrome; otherwise, it is not.

### Example

For `x = 121`:

```text
121 → 1
12  → 2
1   → 1

Reversed number = 121
Original number = 121

Both are equal → Palindrome
```

---

## Complexity Analysis

Let `n` be the number of digits in `x`.

* **Time Complexity:** `O(n)` — Each digit is processed once.
* **Space Complexity:** `O(1)` — Only a constant number of variables are used.

---

## Edge Cases

* **Negative numbers:** Not considered palindromes because the negative sign changes the reversed representation.
* **Numbers ending in `0`:** They are not palindromes unless the number itself is `0`.
* **Single-digit numbers:** Every single-digit number is a palindrome.

---

## Key Concepts

* Digit extraction using `%`
* Integer division using `/`
* Reversing an integer
* Constant-space number manipulation

---

**LeetCode:** [9. Palindrome Number](https://leetcode.com/problems/palindrome-number/description/)

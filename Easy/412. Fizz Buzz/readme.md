# 412. Fizz Buzz

**Problem Link:** [https://leetcode.com/problems/fizz-buzz/](https://leetcode.com/problems/fizz-buzz/)

## Problem Summary

Given an integer `n`, return a string array containing numbers from `1` to `n` with the following rules:

- Return `"FizzBuzz"` if the number is divisible by both `3` and `5`.
- Return `"Fizz"` if the number is divisible by `3`.
- Return `"Buzz"` if the number is divisible by `5`.
- Otherwise, return the number as a string.

## Approach

Use a **for loop** to iterate from `1` to `n`.

For each number:

- Check if it is divisible by both `3` and `5`.
- Otherwise, check if it is divisible by `3`.
- Otherwise, check if it is divisible by `5`.
- If none of the conditions are true, convert the number to a string and add it to the result.

## Algorithm

1. Create an empty vector `answer`.
2. Iterate from `1` to `n`.
3. If the number is divisible by both `3` and `5`, add `"FizzBuzz"`.
4. Else if the number is divisible by `3`, add `"Fizz"`.
5. Else if the number is divisible by `5`, add `"Buzz"`.
6. Otherwise, convert the number to a string using `to_string()` and add it.
7. Return `answer`.

## Time Complexity

- **O(n)** — Each number from `1` to `n` is processed once.

## Space Complexity

- **O(n)** — The result vector stores `n` strings.

## Concepts Used

- For Loop
- If-Else Conditions
- Modulo Operator `%`
- Vector
- String
- `to_string()`
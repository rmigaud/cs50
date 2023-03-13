## Motivation

Imagine that you travel back in time to the 1970's, when the `c` programming language was first created. You are hired as a programmer to come up with a way to convert `string` s to `int` s. (You may have used a function just like this in week 2, called atoi). You want to be thorough in your development process and plan to try several approaches before deciding on the most efficient.

In this problem, you will start with a simple implementation of `atoi` that handles positive `int`s using loops. You want to rework this into an implementation that uses recursion. Recursive functions can be memory intensive and are not always the best solution, but there are some problems in which using recursion can provide a simpler and more elegant solution.

- start by getting the index of the last char in the string (the char before the `\0`).

- Convert this `char` into its numeric value. Can you subtract some `char` to do this?

- Remove the last `char` from the string by moving the null terminator one position to the left.

- Return this value plus 10 times the integer value of the new shortened string.

- Remember you need a base case when creating a recursive function.

## Example output

```
Enter a positive integer: 3432
3432
```

```
Enter a positive integer: 98765
98765
```

We can use a loop to print numbers from 1 to `n` on the same line by using
`end=""` in the `print()` function.We can loops to acces the input and then
print the `i` and use `end=""`

1. Loops from 1 to n (inclusive)

```py
for i in range(1, n+1):
```

2. Print each number on the same line, without spaces. end="" means nothing is
   added after each print, so the output stays on one line.

```py
print(i, end="")
```

If `n = 5`, the output will be:

```py
12345
```

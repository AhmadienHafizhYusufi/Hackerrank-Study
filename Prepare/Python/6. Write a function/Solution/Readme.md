A leap year is a year that is divisible by 4, but not by 100, unless it is also
divisible by 400.

We can make a function using `def`. For this problem, we need to check if a year
is a leap year.

1. Make a function `is_leap`:

```py
def is_leap(year):
```

2. Inside the function, start by setting leap to False (most years are not leap
   years):

```py
leap = False
```

3. Add the nested if conditions as described in the problem. Don't forget to
   return leap at the end:

```py
if year % 4 == 0:
    leap = True
    if year % 100 == 0:
        leap = False
        if year % 400 == 0:
            leap = True

return leap
```

If you call `is_leap(2000)`, it will return `True`. If you call `is_leap(1900)`,
it will return `False`.

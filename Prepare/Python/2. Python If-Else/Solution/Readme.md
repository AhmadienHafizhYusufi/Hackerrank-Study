This problem can be solve using simple if-else, here is the steps:

1. Since there is three conditions for even number, we make if condition for it.

```python
if n % 2 == 0:
```

2. Inside that if, we can make other even number conditions.

```python
if 2 <= n <= 5:
    print("Not Weird")
elif 6 <= n <= 20:
    print("Weird")
elif n > 20:
    print("Not Weird")
```

3. Make Else condition for odd.

```python
else:
    print("Weird")
```

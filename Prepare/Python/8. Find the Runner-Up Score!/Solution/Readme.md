We can find the maximum score in array and then delete it, after that print the
new maximum score in array.

1. Make container for maximum score in array.

```py
max_score = max(arr)
```

2. Do while loop while `max_score` is in array and then remove `max_score`

```py
while max_score in arr:
    arr.remove(max_score)
```

3. Find the maximum in `arr` and print it.

```py
print(max(arr))
```

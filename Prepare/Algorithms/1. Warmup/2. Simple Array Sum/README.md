Given an array of integers, find the sum of its elements.

For example, if the array is `ar = [1, 2, 3]`, then $1 + 2 + 3 = 6$, so the function should return $6$.

### Function Description

Complete the ***simpleArraySum*** function with the following parameter:

- ***ar[n]***: an array of integers

### Returns

- ***int***: the sum of the array elements

### Input Format

The first line contains an integer, ***n***, which is the size of the array.
The second line contains ***n*** space-separated integers representing the elements of the array.

### Constraints

$0 \leq n, ar[i] \leq 1000$

### Sample Input

```c++
STDIN           Function
-----           --------
6               ar[] size n = 6
1 2 3 4 10 11   ar = [1, 2, 3, 4, 10, 11]
```

### Sample Output

```c++
31
```

### Explanation

Print the sum of the array's elements: $1 + 2 + 3 + 4 + 10 + 11 = 31$.

### How To Solve

To find the sum of the array elements, create an integer variable `sum` to store the result. Loop through the array, adding each element to `sum`. Finally, return `sum`.
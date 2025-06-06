# Mini-Max Sum

Given five positive integers, find the minimum and maximum values that can be
calculated by summing exactly four of the five integers. Then print the
respective minimum and maximum values as a single line of two space-separated
long integers.

## Example

`arr = [1,3,5,7,9]` The minimumn sum is $1+3+5+7=16$ and the maximum sum is
$3+5+7+9=24$. The function prints

```
16 24
```

## Function Description

Complete the _miniMaxSum_ function with the following parameter(s):

- `arr[5]`: an array of 5 integers.

## Print

Print two space-seperated integers on one line: the minimum sum and the maximum
sum of 4 of 5 elements. No value should be returned.

**Note** For some languages, like C, C++, and Java, the sums may require that
you use a long integer due to their size.

## Input Format

A single line of five space-seperated integers.

## Constraints

$1<=arr[i]<=10^9$

## Sample Input

```
1 2 3 4 5
```

## Sample Output

```
10 14
```

## Explanation

The numbers are , , , , and . Calculate the following sums using four of the
five integers:

1. Sum everything except 1, the sum is $2+3+4+5=14$.
2. Sum everything except 2, the sum is $1+3+4+5=13$.
3. Sum everything except 3, the sum is $1+2+4+5=12$.
4. Sum everything except 4, the sum is $1+2+3+5=11$.
5. Sum everything except 5, the sum is $1+2+3+4=10$.

**Hints:** Beware of integer overflow! Use a 64-bit integer to store the sums.

Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from 1 to 100 for three categories: problem clarity, originality, and difficulty.

Alice and Bob each have a rating for their challenges, represented as triplets: a = (a[0], a[1], a[2]) for Alice and b = (b[0], b[1], b[2]) for Bob.

To compare their ratings, follow these rules for each category:

- If a[i] > b[i], Alice gets 1 point.
- If a[i] < b[i], Bob gets 1 point.
- If a[i] = b[i], no points are awarded.

### Example

a = [1, 2, 3]
b = [3, 2, 1]

- For the first category, Bob gets a point because a[0] < b[0].
- For the second category, no points are awarded because a[1] = b[1].
- For the third category, Alice gets a point because a[2] > b[2].

The result is [1, 1], with Alice's score first and Bob's second.

### Function Description

Complete the function `compareTriplets` with these parameters:

- `int a[3]`: Alice's ratings
- `int b[3]`: Bob's ratings

### Returns

- `int[2]`: An array with Alice's score first and Bob's score second

### Input Format

- The first line has 3 space-separated integers: a[0], a[1], a[2].
- The second line has 3 space-separated integers: b[0], b[1], b[2].

### Constraints

- 1 ≤ a[i] ≤ 100
- 1 ≤ b[i] ≤ 100

### Sample Input 0

```c++
5 6 7
3 6 10
```

### Sample Output 0

```c++
1 1
```

### Explanation 0

For this input:
- a = (5, 6, 7)
- b = (3, 6, 10)

Comparing each category:
- a[0] > b[0], so Alice gets 1 point.
- a[1] = b[1], so no points are awarded.
- a[2] < b[2], so Bob gets 1 point.

The result is [1, 1].

### Sample Input 1

```c++
17 28 30
99 16 8
```

### Sample Output 1

```c++
2 1
```

### Explanation 1

Comparing the categories:
- a[0] < b[0], so Bob gets 1 point.
- a[1] > b[1], so Alice gets 1 point.
- a[2] > b[2], so Alice gets another point.

The result is [2, 1].

### How To Solve

First, create two variables, `aScore` and `bScore`, to store the scores for Alice and Bob. Loop through the ratings, comparing each category. If a[i] > b[i], increment `aScore`. If a[i] < b[i], increment `bScore`. Finally, return the scores as an array [aScore, bScore].
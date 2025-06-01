Kasus ini dapat diselesaikan dengan nested loop dengan langkah-langkah berikut:

1. Buat for loop terluar untuk jumlah baris.

```c++
for (int i = 1; i <= n; i++) {
    cout << endl;
}
```

2. Di dalamnya buat nested for loop untuk membuat '#'

```c++
for (int j = 0; j < i; j++) {
    cout << "#";
}
```

3. Di dalamnya nested buat kondisi untuk membuat ' '

```c++
if (j == 0) {
    for (int k = 0; k < n - i; k++) cout << " ";
}
```

Hasil akhir kode:

```c++

void staircase(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (j == 0) {
                for (int k = 0; k < n - i; k++) cout << " ";
            }
            cout << "#";
        }
        cout << endl;
    }
}

```

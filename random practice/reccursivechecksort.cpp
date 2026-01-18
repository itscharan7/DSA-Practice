#include <bits/stdc++.h>
using namespace std;

bool checksort(int st, int arr[], int n, int count) {
    // base condition
    if (st == n - 1) {
        // all adjacent pairs must be sorted
        return (count == n - 1);
    }

    if (arr[st] < arr[st + 1]) {
        count++;
    }

    return checksort(st + 1, arr, n, count);
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << checksort(0, arr, n, 0);
    return 0;
}

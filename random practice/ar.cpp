#include <bits/stdc++.h>
using namespace std;

void revarr(int i, int arr[], int n) {
    // base case
    if (i >= n / 2) return;

    swap(arr[i], arr[n - i - 1]);
    revarr(i + 1, arr, n);
}

int main() {
    int arr[10], n;

    cout << "Enter Array size: ";
    cin >> n;

    cout << "Enter Array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    revarr(0, arr, n);

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

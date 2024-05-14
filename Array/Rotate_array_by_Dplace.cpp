#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n, int d) {
    // Write your code here.
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    rotateArray(arr, n, d);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeroes(int n, vector<int> a) {
    int j = -1;

    // Find first zero
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    // If no zero present
    if (j == -1) return a;

    // Move non-zero elements forward
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }

    return a;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> result = moveZeroes(n, a);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
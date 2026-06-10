#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& a, int N) {
    int xor1 = 0, xor2 = 0;

    // XOR from 1 to N
    for (int i = 1; i <= N; i++) {
        xor1 ^= i;
    }

    // XOR of array elements
    for (int i = 0; i < N - 1; i++) {
        xor2 ^= a[i];
    }

    return xor1 ^ xor2;
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    vector<int> a(N - 1);
    cout << "Enter " << N - 1 << " elements:\n";
    for (int i = 0; i < N - 1; i++) {
        cin >> a[i];
    }

    cout << "Missing Number is: " << missingNumber(a, N) << endl;
    return 0;
}
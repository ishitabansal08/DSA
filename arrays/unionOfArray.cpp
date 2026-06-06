#include <bits/stdc++.h>
using namespace std;

vector<int> UnionOfArray(int n, int m, vector<int> A, vector<int> B) {
    int i = 0, j = 0;
    vector<int> uni;

    while (i < n && j < m) {
        if (A[i] <= B[j]) {
            if (uni.size() == 0 || uni.back() != A[i]) {
                uni.push_back(A[i]);
            }
            i++;
        } else {
            if (uni.size() == 0 || uni.back() != B[j]) {
                uni.push_back(B[j]);
            }
            j++;
        }
    }

    // remaining elements of A
    while (i < n) {
        if (uni.back() != A[i]) {
            uni.push_back(A[i]);
        }
        i++;
    }

    // remaining elements of B
    while (j < m) {
        if (uni.back() != B[j]) {
            uni.push_back(B[j]);
        }
        j++;
    }

    return uni;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> A(n), B(m);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int j = 0; j < m; j++) cin >> B[j];

    vector<int> result = UnionOfArray(n, m, A, B);

    for (int x : result) cout << x << " ";

    return 0;
}
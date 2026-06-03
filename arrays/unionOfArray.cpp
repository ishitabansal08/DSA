#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(int n, int m, vector<int> A, vector<int> B) {
    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m) {
        if (A[i] < B[j]) {
            i++;
        }
        else if (A[i] > B[j]) {
            j++;
        }
        else {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }

    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> A(n), B(m);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int j = 0; j < m; j++) cin >> B[j];

    vector<int> result = intersectionArray(n, m, A, B);

    for (int x : result) cout << x << " ";

    return 0;
}
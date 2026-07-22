#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int accounts[100][100];

    // Input the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> accounts[i][j];
        }
    }

    int maxWealth = 0;

    // Find the richest customer
    for (int i = 0; i < m; i++) {
        int sum = 0;

        for (int j = 0; j < n; j++) {
            sum += accounts[i][j];
        }

        if (sum > maxWealth) {
            maxWealth = sum;
        }
    }

    cout << maxWealth;

    return 0;
}
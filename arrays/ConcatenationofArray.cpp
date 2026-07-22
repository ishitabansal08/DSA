#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ar[2 * n];

    // Copy array twice
    for (int i = 0; i < n; i++) {
        ar[i] = arr[i];
        ar[i + n] = arr[i];
    }

    // Print the new array
    for (int i = 0; i < 2 * n; i++) {
        cout << ar[i] << " ";
    }

    return 0;
}
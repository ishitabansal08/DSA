#include <bits/stdc++.h>
using namespace std;

int slargestElement(vector<int> &arr) {
    int largest = arr[0];
    int slargest = -1;
    for(int i = 1; i < arr.size(); i++) {
        if(largest < arr[i]) {
            slargest = largest;
            largest = arr[i];
        }
    else if ( largest > arr[i] && slargest < arr [i]) { 
        slargest =  arr[i] ;
    }
    }
    return slargest;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << slargestElement(arr);
    return 0;
}
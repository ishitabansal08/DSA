#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
    int cnt = 0;
    int el = 0;

    // Step 1: Find potential candidate
    for (int i = 0; i < v.size(); i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        } else if (v[i] == el) {
            cnt++;
        } else {
            cnt--;
        }
    }

    // Step 2: Verify the candidate
    int cnt1 = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == el)
            cnt1++;
    }

    if (cnt1 > v.size() / 2) {
        return el;
    }

    return -1; // no majority element
}
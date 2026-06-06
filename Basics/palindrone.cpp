#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string t = "";

    // Step 1: keep only letters & numbers, convert to lowercase
    for (char c : s) {
        if (isalnum(c)) {
            t += tolower(c);
        }
    }

    // Step 2: reverse and compare
    string rev = t;
    reverse(rev.begin(), rev.end());

    return t == rev;
}

int main() {
    string s;
    getline(cin, s);   // take full line input

    if (isPalindrome(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}
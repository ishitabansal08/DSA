#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int xorr = 0;
    for (int i = 0; i < nums.size(); i++) {
        xorr ^= nums[i];
    }
    return xorr;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Single number is: " << singleNumber(nums);
    return 0;
}
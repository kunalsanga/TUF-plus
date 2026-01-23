#include <bits/stdc++.h>
using namespace std;

class Solution {	
public:
    // Helper recursive function
    int helper(vector<int>& nums, int index) {
        // Base case: end of array
        if (index == nums.size())
            return 0;

        // Recursive case
        return nums[index] + helper(nums, index + 1);
    }

    // Main function required by the problem
    int arraySum(vector<int>& nums) {
        return helper(nums, 0);
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = sol.arraySum(nums);

    cout << "Sum of array elements: " << result;

    return 0;
}

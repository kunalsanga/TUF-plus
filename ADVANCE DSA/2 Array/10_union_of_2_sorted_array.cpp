#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> result;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] <= nums2[j]) {
                if (result.empty() || result.back() != nums1[i]) {
                    result.push_back(nums1[i]);
                }
                i++;
            } else {
                if (result.empty() || result.back() != nums2[j]) {
                    result.push_back(nums2[j]);
                }
                j++;
            }
        }

        // Remaining elements of nums1
        while (i < nums1.size()) {
            if (result.empty() || result.back() != nums1[i]) {
                result.push_back(nums1[i]);
            }
            i++;
        }

        // Remaining elements of nums2
        while (j < nums2.size()) {
            if (result.empty() || result.back() != nums2[j]) {
                result.push_back(nums2[j]);
            }
            j++;
        }

        return result;
    }
};

int main() {
    Solution sol;

    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> nums1(n1);
    cout << "Enter sorted elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> nums2(n2);
    cout << "Enter sorted elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    vector<int> result = sol.unionArray(nums1, nums2);

    cout << "Union of arrays: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
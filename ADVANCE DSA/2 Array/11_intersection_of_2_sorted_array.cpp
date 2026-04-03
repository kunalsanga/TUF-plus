#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> result;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                i++;
            } 
            else if (nums1[i] > nums2[j]) {
                j++;
            } 
            else {
                // equal → add to result
                result.push_back(nums1[i]);
                i++;
                j++;
            }
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

    vector<int> result = sol.intersectionArray(nums1, nums2);

    cout << "Intersection of arrays: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
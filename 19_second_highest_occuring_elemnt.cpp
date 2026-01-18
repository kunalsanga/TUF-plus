#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {

        // Step 1: Create a hash map to store frequency of each element
        // key   -> element
        // value -> how many times it appears
        unordered_map<int,int> freq;

        // Count frequency of each element in the array
        for (int x : nums)
            freq[x]++;

        // Step 2: Variables to store the highest and second highest frequency
        int maxFreq = 0;
        int secondMaxFreq = 0;

        // Step 3: Find maxFreq and secondMaxFreq
        for (auto &p : freq) {
            // p.first  -> element
            // p.second -> frequency of that element

            // If current frequency is greater than maxFreq
            if (p.second > maxFreq) {
                // Current maxFreq becomes secondMaxFreq
                secondMaxFreq = maxFreq;

                // Update maxFreq
                maxFreq = p.second;
            }
            // If frequency lies strictly between maxFreq and secondMaxFreq
            else if (p.second > secondMaxFreq && p.second < maxFreq) {
                secondMaxFreq = p.second;
            }
        }

        // Step 4: If no second most frequent element exists
        // (example: all elements appear same number of times)
        if (secondMaxFreq == 0)
            return -1;

        // Step 5: Find the smallest element having secondMaxFreq
        int ans = INT_MAX;

        for (auto &p : freq) {
            if (p.second == secondMaxFreq)
                ans = min(ans, p.first);
        }

        // Step 6: Return the result
        return ans;
    }
};

int main() {
    Solution sol;

    // Test input
    vector<int> nums = {10,9,7,7};

    int result = sol.secondMostFrequentElement(nums);

    cout << "Second highest occurring element: " << result << endl;

    return 0;
}

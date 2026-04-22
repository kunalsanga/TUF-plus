#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> pascalTriangleII(int r) {

        // This vector will store the r-th row
        vector<int> row;

        // First element is always 1
        long long val = 1;
        row.push_back(val);

        /*
        We are generating elements using the formula:
        C(n, k) = C(n, k-1) * (n - k + 1) / k

        Here:
        n = r - 1 (since row is 1-indexed)
        i = current position (0-based internally)

        Instead of calculating factorials, we build each value
        from the previous one to avoid overflow and improve efficiency.
        */

        for (int i = 1; i < r; i++) {

            // Update value using previous value
            // val = val * (r - i) / i
            val = val * (r - i) / i;

            // Add the computed value to the row
            row.push_back(val);
        }

        // Return the final row
        return row;
    }
};

int main() {
    int r;

    // Taking input from user
    cout << "Enter row number: ";
    cin >> r;

    Solution sol;

    // Get the r-th row
    vector<int> result = sol.pascalTriangleII(r);

    // Print the result
    cout << "Pascal Triangle Row " << r << ": ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find value at r-th row and c-th column in Pascal's Triangle
    int pascalTriangleI(int r, int c) {

        // Convert to 0-based indexing
        int n = r - 1;   // total elements in row = n+1
        int k = c - 1;   // position index

        // Result variable (use long long to avoid overflow during calculation)
        long long res = 1;

        /*
        We calculate nCk using iterative formula:
        nCk = n * (n-1) * ... / (1 * 2 * ...)

        Instead of factorial (which may overflow),
        we compute step by step.
        */

        for (int i = 0; i < k; i++) {
            // Multiply numerator part
            res = res * (n - i);

            // Divide denominator part
            res = res / (i + 1);
        }

        return (int)res; // final answer fits in int (as per constraints)
    }
};

int main() {

    int r, c;

    // Taking user input
    cout << "Enter row (r): ";
    cin >> r;

    cout << "Enter column (c): ";
    cin >> c;

    // Create object of Solution class
    Solution sol;

    // Call function
    int result = sol.pascalTriangleI(r, c);

    // Output result
    cout << "Value at (" << r << ", " << c << ") in Pascal's Triangle is: " 
         << result << endl;

    return 0;
}
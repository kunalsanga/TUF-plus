#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Helper function to calculate sum of digits of a number
    int digitSum(int num) {
        // Base case
        if (num == 0)
            return 0;

        // Recursive case: last digit + sum of remaining digits
        return (num % 10) + digitSum(num / 10);
    }

    int addDigits(int num) {
        // Base case: if number is already a single digit
        if (num < 10)
            return num;

        // Recursive call after summing digits
        return addDigits(digitSum(num));
    }
};

int main() {
    Solution sol;

    int num;
    cout << "Enter number: ";
    cin >> num;

    int result = sol.addDigits(num);

    cout << "Result after adding digits repeatedly: " << result;

    return 0;
}

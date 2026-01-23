#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Recursive helper function
    void helper(vector<char>& s, int left, int right) {
        // Base case: when pointers meet or cross
        if (left >= right)
            return;

        // Swap characters at left and right
        swap(s[left], s[right]);

        // Recursive call for the remaining inner string
        helper(s, left + 1, right - 1);
    }

    // Function required by the problem
    vector<char> reverseString(vector<char>& s) {
        helper(s, 0, s.size() - 1);
        return s;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number of characters: ";
    cin >> n;

    vector<char> s(n);
    cout << "Enter characters: ";
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    vector<char> result = sol.reverseString(s);

    cout << "Reversed string: [ ";
    for (char c : result) {
        cout << "'" << c << "' ";
    }
    cout << "]";

    return 0;
}

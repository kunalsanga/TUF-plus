#include <bits/stdc++.h>
using namespace std;

class Solution {	
public:		
    vector<char> reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        // Reverse using two pointers
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }

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

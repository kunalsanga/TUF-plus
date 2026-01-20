#include <bits/stdc++.h>
using namespace std;

class Solution {	
public:		
    string largeOddNum(string& s) {
        int n = s.size();
        int idx = -1;

        // Step 1: Find the rightmost odd digit
        for (int i = n - 1; i >= 0; i--) {
            if ((s[i] - '0') % 2 == 1) {
                idx = i;
                break;
            }
        }

        // Step 2: If no odd digit found, return empty string
        if (idx == -1)
            return "";

        // Step 3: Take substring till the odd digit
        string result = s.substr(0, idx + 1);

        // Step 4: Remove leading zeros
        int start = 0;
        while (start < result.size() && result[start] == '0') {
            start++;
        }

        return result.substr(start);
    }
};

int main() {
    Solution sol;

    // Test input
    string s = "0032579";

    string ans = sol.largeOddNum(s);

    if (ans.empty())
        cout << "\"\"";
    else
        cout << ans;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        char lastchar(string& s){
            return s[s.length()-1];
        }
};
int main(){
    Solution sol;
    string s = "ronaldo";
    cout<<sol.lastchar(s);
    return 0;
}
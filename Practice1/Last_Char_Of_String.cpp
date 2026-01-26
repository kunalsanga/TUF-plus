#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        char lastchar(const string& s){
            return s[s.length()-1];
        }
};
int main(){
    Solution sol;
    string s;
    cout<<"enter the string: ";
    getline(cin,s);
    cout<<sol.lastchar(s);
    return 0;
}
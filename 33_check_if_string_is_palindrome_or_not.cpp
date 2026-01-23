#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool helper(string& s, int left, int right){
            if(left>=right) return true;
            if(s[left]!=s[right]) return false;
            return helper(s,left+1,right-1);
        }
        bool palindromecheck(string& s){
            return helper(s,0,s.length()-1);
        }
};
int main(){
    Solution sol;
    string s="aabbcccdbbaa";
    cout<<(sol.palindromecheck(s)? "true":"false");
    return 0;
}
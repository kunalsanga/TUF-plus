#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool ispalindrome(vector<char>& s){
            int left=0;
            int right=s.size()-1;
            while(left<right){
                if(s[left]!=s[right]){
                    return false;
                }
                left++;
                right--;
            }
            return true;
        }
};
int main(){
    Solution sol;
    vector<char> s ={'a','a','a','b','b','c','b','b','a','a','a'};
    cout<<(sol.ispalindrome(s)? "true":"false");
    return 0;
}
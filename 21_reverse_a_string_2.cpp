#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void reversestring(vector<char>& s){
            int left=0;
            int right=s.size()-1;
            while(left<right){
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
};
int main(){
    Solution sol;
    vector<char> s={'b','y','e'};
    sol.reversestring(s);
    for(char c: s){
        cout<<c<<" ";
    }
    return 0;
}
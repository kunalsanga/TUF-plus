#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
     bool rotatestring(string& s, string& goal){
        if(s.length()!=goal.length()){
            return false;
        }
        string doubled=s+s;
        return doubled.find(goal)!=string::npos;
     }
};
int main(){
    Solution sol;
    string s,goal;
    cout<<"enter string s:";
    cin>>s;
    cout<<"enter string goal:";
    cin>>goal;
    cout<<(sol.rotatestring(s,goal)? "true":"false");
    return 0;
}
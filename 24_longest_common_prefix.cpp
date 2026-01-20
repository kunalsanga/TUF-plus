#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        string longcomprefix(vector<string>& str){
            if(str.empty()) return "";
            string prefix=str[0];
            for(int i=1;i<str.size();i++){
                int j=0;
                while(j<prefix.size() && j<str[i].size() && prefix[j]==str[i][j]){
                    j++;
                }
                prefix=prefix.substr(0,j);
                if(prefix.empty()) return "";
            }
            return prefix;
        }
};
int main(){
    Solution sol;
    vector<string> str={"lady","lazy"};
    string result= sol.longcomprefix(str);
    cout<<result;
    return 0;
}
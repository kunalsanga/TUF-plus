#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<char> frequencysort(string& s){
            vector<int> freq(26,0);
            for(char c: s){
                freq[c-'a']++;
            }
            vector<pair<int,char>> vec;
            for(int i=0;i<26;i++){
                if(freq[i]>0){
                    vec.push_back({freq[i],char('a'+i)});
                }
            }
            sort(vec.begin(),vec.end(),[](auto &a, auto &b){
                if(a.first!=b.first){
                    return a.first>b.first;
                }
                return a.second<b.second;
            });
            vector<char> result;
            for(auto &p : vec){
                result.push_back(p.second);
            }
            return result;

        }
};
int main(){
    Solution sol;
    string s;
    cout<<"enter a string s: ";
    cin>>s;
    vector<char> result=sol.frequencysort(s);
    for(char c: result){
        cout<<c<<" ";
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool anagram(string& s, string& t){
            if(s.length()!=t.length()){
                return false;
            }
            vector<int> freq(26,0);
            for(char c : s){
                freq[c-'a']++;
            }
            for(char c : t){
                freq[c-'a']--;
            }
            for(int count : freq){
                if(count!=0){
                    return false;
                }
            }
            return true;
        }
};
int main(){
    Solution sol;
    string s, t;
    cout<<"enter s: ";
    cin>>s;
    cout<<"enter t: ";
    cin>>t;
    cout<<(sol.anagram(s,t)? "true":"false");
    return 0;
}
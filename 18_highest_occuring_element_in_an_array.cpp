#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int mostfreqelement(vector<int>& nums){
            unordered_map<int,int> freq;
            for(int x: nums){
                freq[x]++;
            }
            int maxfreq=0;
            int ans=INT_MAX;
            for(auto &p: freq){
                if(p.second>maxfreq || (p.second==maxfreq && p.first<ans)){
                    maxfreq=p.second;
                    ans=p.first;
                }
            }
            return ans;
        }
};
int main(){
    Solution sol;
    vector<int> nums={4,4,5,5,6};
    
    cout<<"max_occ_element: "<<sol.mostfreqelement(nums);
}
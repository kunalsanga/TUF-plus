#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int findmaxminfreq(vector<int>& nums){
            unordered_map<int,int> freq;
            for(int x: nums){
                freq[x]++;
            }
            int maxfreq=0;
            int minfreq=INT_MAX;
            for(auto &p : freq){
                maxfreq=max(maxfreq,p.second);
                minfreq=min(minfreq,p.second);
            }
            return maxfreq+minfreq;

        }
};
int main(){
    Solution sol;
    vector<int> nums={10,9,7,7,8,8,8};
    int result=sol.findmaxminfreq(nums);
    cout<<"sum: "<<result;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int helper(vector<int>& nums, int index){
            if(index==nums.size()) return 0;
            return nums[index]+helper(nums,index+1);
        }
        int arraysum(vector<int>& nums){
            return helper(nums,0);
        }
        
};
int main(){
    Solution sol;
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    vector<int> nums={12,9,17};
    cout<<sol.arraysum(nums);
    return 0;
}
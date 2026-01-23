#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool helper(vector<int>& nums, int index){
            if(index==nums.size()-1) return true;
            if(nums[index]>nums[index+1]) return false;
            return helper(nums,index+1);
        }
        bool issorted(vector<int>& nums){
            if(nums.size()<=1) return true;
            return helper(nums,0);
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enetr size: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<(sol.issorted(nums)? "true":"false");
    return 0;
}
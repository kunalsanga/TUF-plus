#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void helper(vector<int>& nums, int left, int right){
            if(left>=right) return;
            swap(nums[left],nums[right]);
            helper(nums,left+1,right-1);
        }
        vector<int> reversearray(vector<int>& nums){
            helper(nums,0,nums.size()-1);
            return nums;
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter size: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> result=sol.reversearray(nums);
    cout<<"reverse array: ";
    for(int x: result){
        cout<<x<<" ";
    }
    
    return 0;
}
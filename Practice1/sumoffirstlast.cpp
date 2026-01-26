#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int SumFirstLast(vector<int> nums){
            return nums[0]+nums[nums.size()-1];
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elemnts of array: ";
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"sum of 1st and last: "<<sol.SumFirstLast(nums);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int sumofFirstandLast(vector<int>& nums){
            return nums[0]+nums[nums.size()-1];
        }
};
int main(){
    Solution sol;
    vector<int> nums={1,2,3};
    cout<<"sum of first and last digit is: "<<sol.sumofFirstandLast(nums);
    return 0;
}
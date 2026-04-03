#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int missingnum(vector<int>& nums){
            int n = nums.size();
            int expectedsum= n*(n+1)/2;
            int actualsum=0;
            for(int num:nums){
                actualsum += num;
            }
            return expectedsum-actualsum;
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<"missing number is: "<<sol.missingnum(nums)<<endl;
    
    return 0;
}
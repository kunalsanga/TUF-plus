#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int missingnum(vector<int>& nums){
            int n=nums.size();
            int xor1=0, xor2=0;

            for(int i=0; i<=n; i++){
                xor1 ^=i;
            }

            for(int num:nums){
                xor2 ^=num;
            }
            return xor1 ^ xor2;
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
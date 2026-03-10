#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int LinearSearch(vector<int>& nums, int target){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==target){
                    return 1;
                }
            }
            return -1;
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"enter the elements of array: ";
    for(int x=0;x<n;x++){
        cin>>nums[x];
    }
    int target;
    cout<<"enter the target: ";
    cin>>target;
    int result=sol.LinearSearch(nums,target);
    cout<<"result: "<<result<<endl;
    return 0;;

}
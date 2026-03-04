#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int binarysearch(vector<int> &nums, int target){
            int n = nums.size();
            int low=0,high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]==target){
                    return mid;
                }else if(target>nums[mid]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
            return -1;
        }
};
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cout<<"enter target: ";
    cin>>target;
    Solution sol;
    int result=sol.binarysearch(nums,target);
    if(result==-1){
        cout<<"target not found: "<<result<<endl;
    }else{
        cout<<"target found at: "<<result<<endl;
    }
    return 0;
}
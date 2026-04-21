#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> rearrangeArray(vector<int>& nums){
            int n = nums.size();
            vector<int> ans(n);
            int posIndex=0;
            int negIndex=1;
            for(int num:nums){
                if(num>0){
                    ans[posIndex]=num;
                    posIndex+=2;
                }else{
                    ans[negIndex]=num;
                    negIndex+=2;
                }
            }
            return ans;
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> result = sol.rearrangeArray(nums);
    cout<<"rearranged array is: ";
    for(int x : result){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> leaders(vector<int>& nums){
            int n = nums.size();
            vector<int> result;

            int maxRight=INT_MIN;
            for(int i=n-1;i>=0;i--){
                if(nums[i]>maxRight){
                    result.push_back(nums[i]);
                    maxRight=nums[i];
                }
            }
            reverse(result.begin(),result.end());
            return result;
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

    vector<int> ans = sol.leaders(nums);
    cout<<"leaders of array are: ";
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void movezeros(vector<int>& nums){
            int j=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    if(i!=j){
                        swap(nums[i],nums[j]);
                    }
                    j++;
                }
            }
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter the no of elements: ";
    cin>>n;
    
    vector<int> nums(n);
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    sol.movezeros(nums);
    cout<<"after moving zeros: ";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
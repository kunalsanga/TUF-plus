#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void rotatearrayleftbyone(vector<int>& nums){
            int n = nums.size();
            int first = nums[0];
            for(int i=1; i<n; i++){
                nums[i-1]=nums[i];
            }
            nums[n-1]=first;
        }
};
int main(){
    Solution obj;
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"enter the elements of array: ";
    for(int x=0;x<n;x++){
        cin>>nums[x];
    }
    obj.rotatearrayleftbyone(nums);
    cout<<"result: ";
    for(int x=0;x<n;x++){
        cout<<nums[x]<<" ";
    }
    return 0;
}
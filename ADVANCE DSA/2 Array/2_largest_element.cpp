#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int LargestElement(vector<int>& nums){
            int largest=nums[0];
            for(int i=1;i<nums.size();i++){
                if(nums[i]>largest){
                    largest=nums[i];
                }
            }
            return largest;
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
    int result=sol.LargestElement(nums);
    cout<<"largest element is: "<<result<<endl;
    return 0;
}
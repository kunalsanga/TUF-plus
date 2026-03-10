#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int SecondLargestElement(vector<int>& nums){
            int largest=nums[0];
            int secondlargest=-1;
            for(int i=1;i<nums.size();i++){
                if(nums[i]>largest){
                    largest=nums[i];
                    secondlargest=largest;
                }else if(nums[i]<largest && nums[i]>secondlargest){
                    secondlargest=nums[i];
                }
            }
            return secondlargest;
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
    int result = sol.SecondLargestElement(nums);
    cout<<"2nd largest elemnt is: "<<result<<endl;
    return 0;
}
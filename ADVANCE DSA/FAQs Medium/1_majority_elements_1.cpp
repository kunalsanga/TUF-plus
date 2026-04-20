#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int majorityelements(vector<int>& nums){
            int count=0;
            int candidate=0;
            for(int num : nums){
                if(count==0){
                    candidate=num;
                }
                if(num==candidate){
                    count++;
                }else{
                    count--;
                }
            }
            return candidate;
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

    int result = sol.majorityelements(nums);

    cout<<"majority elements is: "<<result<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int maxconsecutiveones(vector<int>& nums){
            int count=0;
            int maxcount=0;
            for(int num : nums){
                if(num==1){
                    count++;
                    maxcount=max(maxcount,count);
                }else{
                    count=0;
                }
            }
            return maxcount;
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"enter the elements of array: ";
    for(int x=0;x<n;x++){
        cin>>nums[x];
    }
    int result=sol.maxconsecutiveones(nums);
    cout<<"result: "<<result<<endl;
    return 0;
}
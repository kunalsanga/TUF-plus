#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> selectionsort(vector<int>& nums){
            for(int i=0; i<nums.size()-1;i++){
                int minindex=i;
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]<nums[minindex]){
                        minindex=j;
                    }
                }
                if(minindex!=i){
                    swap(nums[minindex],nums[i]);
                }
            }
            return nums;

        }
};
int main(){
    Solution sol;
    vector<int> arr={3,2,3,4,5};
    cout<<"original arr: ";
    for(int num: arr){
        cout<<num<<" ";
    }
    vector<int> s1=sol.selectionsort(arr);
    cout<<"sorted array: ";
    for(int num: s1){
        cout<<num<<" ";
    }
    return 0;
}
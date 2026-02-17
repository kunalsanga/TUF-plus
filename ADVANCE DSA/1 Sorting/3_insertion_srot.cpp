#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> insertionsort(vector<int>& nums){
            int n = nums.size();
            for(int i=1; i<n ; i++){
                int key = nums[i];
                int j = i-1;
                while(j>=0 && nums[j]>key){
                    nums[j+1]=nums[j];
                    j--;
                }
                nums[j+1]=key;
            }
            return nums;
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the elements of array: ";
    for(int x=0; x<n; x++){
        cin>>arr[x];
    }
    vector<int> a=sol.insertionsort(arr);
    cout<<"sorted array is: ";
    for(int x: a){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
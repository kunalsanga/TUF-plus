#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void merge(vector<int> &arr, int low, int mid, int high){
            vector<int> temp;
            int left=low;
            int right=mid+1;
            while(left<=mid && right<=high){
                if(arr[left]<=arr[right]){
                    temp.push_back(arr[left]);
                    left++;
                }else{
                    temp.push_back(arr[right]);
                    right++;
                }
            }
            while(left<=mid){
                temp.push_back(arr[left]);
                left++;
            }
            while(right<=high){
                temp.push_back(arr[right]);
                right++;
            }
            for(int i=low; i<=high; i++){
                arr[i]=temp[i-low];
            }
        }
        void mergesorthelper(vector<int> &arr, int low, int high){
            if(low>=high){
                return;
            }
            int mid = low + (high-low)/2;
            mergesorthelper(arr,low,mid);
            mergesorthelper(arr,mid+1,high);
            merge(arr,low,mid,high);
        }
        vector<int> mergesort(vector<int> &nums){
            int n = nums.size();
            mergesorthelper(nums,0,n-1);
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
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> result=sol.mergesort(arr);
    cout<<"sorted array: ";
    for(int i : result){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
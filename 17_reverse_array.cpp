#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void reverse(int arr[], int n){
        int left=0, right=n-1;
        while(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
};
int main(){
    Solution sol;
    int arr[]={1,2,3,4,5};
    int n= 5;
    sol.reverse(arr,n);
    cout<<"reversed array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
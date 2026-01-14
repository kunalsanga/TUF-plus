#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void reversearray(int arr[], int n){
            int left=0;
            int right=n-1;

            while(left<right){
                swap(arr[left],arr[right]);
                left++;
                right--;

            }
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sol.reversearray(arr,n);
    cout<<"reversed arrray: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
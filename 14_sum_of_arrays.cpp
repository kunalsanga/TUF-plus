#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int sum(int arr[],int n){
            int total=0;
            for(int i=0;i<n;i++){
                total+=arr[i];
            }
            return total;
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = sol.sum(arr,n);
    cout<<"sum of elements are: "<<result;
    return 0;
}
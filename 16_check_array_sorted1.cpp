#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool arraysorted(int arr[], int n){
            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    return false;
                }
            }
            return true;
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = sol.arraysorted(arr,n);
    cout<<(result? "true":"flase");
    return 0;
}
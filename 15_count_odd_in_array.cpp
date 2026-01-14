#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int countOdd(int arr[], int n){
            int count=0;
            for(int i=0;i<n;i++){
                if(arr[i]%2!=0){
                    count++;
                }
            }
            return count;
        }
        
};
int main(){
    Solution sol;
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = sol.countOdd(arr,n);
    cout<<"total odd no: "<<result;
    return 0;
}
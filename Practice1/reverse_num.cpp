#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
     int reversenum(int n){
        int rev=0;
        while(n>0){
            rev=rev*10+(n%10);
            n=n/10;
        }
        return rev;

     }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"reversed num: "<<sol.reversenum(n);
    return 0;
}
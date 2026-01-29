#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool ispaline(int n){
            int original=n;
            int rev=0;
            while(n>0){
                rev=rev*10+(n%10);
                n=n/10;
            }
            return original==rev;
        }
};
int main(){

    Solution sol;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<(sol.ispaline(n)? "true":"false");
    return 0;
}
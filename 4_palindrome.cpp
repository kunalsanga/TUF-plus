#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool ispalindrome(int n){
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
    cout<<"enter a number: ";
    cin>>n;
    cout<<sol.ispalindrome(n);
    cout<<(sol.ispalindrome(n) ? "true":"false");
    return 0;
}
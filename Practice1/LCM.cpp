#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int GCD(int a, int b){
            while(b!=0){
                int rem=a%b;
                a=b;
                b=rem;
            }
            return a;
        }
        int LCM(int n1, int n2){
            return (n1*n2)/GCD(n1,n2);
        }
};
int main(){
    Solution sol;
    int n1;
    cout<<"enter n1: ";
    cin>>n1;
    int n2;
    cout<<"enter n2: ";
    cin>>n2;
    cout<<sol.LCM(n1,n2);
    return 0;
}
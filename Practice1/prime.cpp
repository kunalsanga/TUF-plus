#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool isprime(int n){
            if(n<=1) return false;
            for(int i=2;i*i<=n;i++){
                if(n%i==0) return false;
            }
            return true;
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<(sol.isprime(n)? "true":"false");
    return 0;
}
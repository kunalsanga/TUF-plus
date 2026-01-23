#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
     long long int fact(int n){
        if(n==0) return 1;
        return n*fact(n-1);
     }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<sol.fact(n);
    return 0;
}
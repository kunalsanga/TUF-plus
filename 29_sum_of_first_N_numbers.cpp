#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int nnumsum(int n){
            if(n==0)return 0;
            return n+nnumsum(n-1);
        }

};
int main(){
    Solution sol;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<sol.nnumsum(n);
    return 0;
}
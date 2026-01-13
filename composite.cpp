#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool iscomposite(int n){
            if(n<=1){
                return false;
            }
            for(int i=2;i*i<=n;i++){
                if(n%i==0){
                    return true;
                }
            }
            return false;
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<(sol.iscomposite(n)? "true":"false");
    return 0;
}
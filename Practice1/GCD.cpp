#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    
    int GCD(int n1, int n2){
        while(n2!=0){
            int rem=n1%n2;
            n1=n2;
            n2=rem;
        }
        return n1;
    }
};
int main(){
    Solution sol;
    int n1;
    cout<<"enetr n1: ";
    cin>>n1;
    int n2;
    cout<<"enter n2: ";
    cin>>n2;
    cout<<sol.GCD(n1,n2);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int factorial(int n){
            if(n==0) return 1;
            int fact=1;
            while(n>0){
                fact*=n;
                n--;
            }
            return fact;
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"factorial of a n : "<<sol.factorial(n);
    return 0;
}
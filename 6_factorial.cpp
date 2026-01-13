#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int factorial(int n){
            if(n==0){
                return 1;
            }
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
    cout<<"enter the number: ";
    cin>>n;
    cout<<"factorial of num is: "<<sol.factorial(n)<<endl;
    return 0;
}
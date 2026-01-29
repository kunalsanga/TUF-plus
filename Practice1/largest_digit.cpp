#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int largedigit(int n){
            int maxdigit=0;
            while(n>0){
                int digit=n%10;
                if(digit>maxdigit){
                    maxdigit=digit;
                }
                n=n/10;
            }
            return maxdigit;
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"max digit is: "<<sol.largedigit(n);
    return 0;
}
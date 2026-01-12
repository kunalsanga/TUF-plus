#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int lastdigit(int n){
            int maxdigit=0;
            while(n>0){
                int digit=n%10;
                while(digit>maxdigit){
                    maxdigit=digit;
                }
                n/=10;
            }
            return maxdigit;
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter number:";
    cin>>n;
    cout<<"largest digit is "<<sol.lastdigit(n);
    return 0;
}
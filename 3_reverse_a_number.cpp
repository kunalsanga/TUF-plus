#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int reversenumber(int n){
            int rev=0;
            while(n>0){
                rev=rev*10+(n%10);
                n=n/10;
            }
            return rev;
        }
};
int main(){
    Solution sol;
    int n =21;
    cout<<"reverse of number: "<<sol.reversenumber(n);
    return 0;
}
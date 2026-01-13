#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool isprime(int x){
            if(x<=1){
                return false;
            }
            for(int i=2;i*i<=x;i++){
                if(x%i==0){
                    return false;
                }
            }
            return true;
        }
        int primeuptoN(int n){
            int count=0;
            for(int i=2;i<=n;i++){
                if(isprime(i)){
                    count++;
                }
            }
            return count;

        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"the output is: "<<sol.primeuptoN(n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool helper(int num, int divisor){
            if(divisor*divisor>num) return true;
            if(num % divisor == 0) return false;
            return helper(num,divisor+1);
        }
        bool checkprime(int num){
            if(num<=1) return false;
            return helper(num,2);
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter num: ";
    cin>>n;
    cout<<(sol.checkprime(n)? "true":"false");
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool armstrong(int n){
            int original=n;
            int count=0;
            int temp=n;
            while(temp>0){
                temp/=10;
                count++;
            }
            double sum=0;
            temp=n;
            while(temp>0){
                int digit=temp%10;
                sum+=pow(digit,count);
                temp/=10;
            }
            return sum==original;
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<(sol.armstrong(n)? "True":"False")<<endl;
    return 0;
}
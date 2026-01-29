#include<bits/stdc++.h.>
using namespace std;
class Solution{
    public:
        bool isarmstrong(int n){
            int original=n;
            int count=0;
            int temp=n;
            while(temp>0){
                temp/=10;
                count++;
            }
            temp=n;
            double sum=0;
            while(temp>0){
                int digit=temp%10;
                sum+=pow(digit,count);
                temp/=10;
            }
            return original==sum;
        }

};
int main(){
    Solution sol;
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<(sol.isarmstrong(n)? "true":"false");
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int countDigit(int num){
            if(num==0) return 1;
            int count=0;
            while(num>0){
                count++;
                num=num/10;
            }
            return count;
        }
};
int main(){
    Solution sol;
    int num;
    cout<<"enter digit: ";
    cin>>num;
    cout<<sol.countDigit(num);
    return 0;
}
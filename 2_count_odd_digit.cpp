#include<iostream>
using namespace std;
class Solution{
    public:
        int countodd(int n){
            int count=0;
            while(n>0){
                int digit = n % 10;
                if(digit%2==1){
                    count++;
                }
                n=n/10;
                
            }
            return count;
        }
};

int main(){
    Solution obj;
    int n;
    cout<<"enter:";
    cin>>n;
    cout<<obj.countodd(n)<<endl;
    return 0;
}
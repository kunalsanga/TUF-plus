#include<iostream>
using namespace std;
class Solution{
    public:
        int countdigit(int n){
            if(n==0){
                return 1;
            }

            int count=0;

            while(n>0){
                count++;
                n=n/10;
            }
            return count;
            

        }
};

int main(){
    Solution obj;
    int n;
    cin>>n;
    cout<<obj.countdigit(n)<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void printx(int x, int n){
            int i=1;
            while(i<=n){
                if(i>1){
                    cout<<" ";
                }
                cout<<x;
                i++;
            }
            cout<<endl;
        }
};
int main(){
    Solution sol;
    int x=10;
    int n=5;
    sol.printx(10,5);
    return 0;
}
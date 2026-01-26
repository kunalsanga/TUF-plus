#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void printxntimes(int x, int n){
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
    int x, n;
    cout<<"enter x: ";
    cin>>x;
    cout<<"enter n: ";
    cin>>n;
    sol.printxntimes(x,n);
    return 0;
}
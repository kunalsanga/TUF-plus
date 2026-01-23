#include<bits/stdc++.h>
using namespace std;
void printxntimes(int x, int n){
    if(n==0) return;
    cout<<x<<" ";
    printxntimes(x,n-1);
}
int main(){
    int x=4,n=5;
    printxntimes(x,n);
    return 0;
}
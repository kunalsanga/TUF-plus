#include<iostream>
using namespace std;
void tailrecursion(int n){
    if(n==0) return;
    cout<<n<<" ";
    tailrecursion(n-1);
}
int main(){
    tailrecursion(5);
    return 0;
}
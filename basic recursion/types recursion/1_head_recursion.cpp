#include<iostream>
using namespace std;
void headrecursion(int n){
    if(n>0){
        headrecursion(n-1);//RECURSIVE CALL 
        cout<<n<<" ";
    }
    
}
int main(){
    headrecursion(5);
    return 0;
}
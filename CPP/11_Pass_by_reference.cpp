#include<iostream>
using namespace std;
void changevalue(int &x){
    x = 100;
}
int main(){
    int num = 10;
    changevalue(num);
    cout<<num;
    return 0;
}
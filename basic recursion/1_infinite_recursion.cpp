#include<iostream>
using namespace std;
void infiniteRecursion(){
    cout<<"calling function"<<endl;
    infiniteRecursion();
}
int main(){
    infiniteRecursion();
    return 0;
}
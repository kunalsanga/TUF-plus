#include<iostream>
using namespace std;
int main(){
    int day = 2;
    switch(day){
        case 1:
            cout<<"monday";
            break;
        case 2:
            cout<<"tuesday";
            break;
        case 3:
            cout<<"wednesday";
            break;
        default:
            cout<<"invalid day!!";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> lst;
    lst.push_front(20);
    lst.emplace_front(10);
    for(int i : lst){
        cout<<i<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> dq={10,20,30};
    dq.push_front(0);
    dq.push_back(40);
    for(int i : dq){
        cout<<i<<" ";
    }
    return 0;
}
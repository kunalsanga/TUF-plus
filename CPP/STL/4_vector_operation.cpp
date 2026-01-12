#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> num = {1,2,3,4,5};
    num.push_back(6);
    num.push_back(7);
    for(int i : num){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"front elemnt: "<<num.front()<<endl;
    cout<<"bacl element: "<<num.back();

    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v = {10,20,30};
    v.erase(v.begin()+1);
    v.insert(v.begin()+1,21);


    for(int i : v ){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"size of vector: "<<v.size()<<endl;
    cout<<"element at index 2: "<<v[2];
    return 0;
}
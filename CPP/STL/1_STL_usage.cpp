#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> numbers = {8,2,9,10,21,3,6};
    sort(numbers.begin(),numbers.end());

    for(int num : numbers){
        cout<<num<<" ";
    }
    return 0;

}
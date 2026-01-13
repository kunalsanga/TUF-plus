#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> divisor(int n){
            vector<int> result;
            for(int i=1;i*i<=n;i++){
                if(n%i==0){
                    result.push_back(i);
                    if(i!=n/i){
                        result.push_back(n/i);
                    }
                }
            }
            sort(result.begin(),result.end());
            return result;
        }

};
int main(){
    Solution sol;
    int n;
    cout<<"enter a number: ";
    cin>>n;
    vector<int> ans=sol.divisor(n);
    cout<<"divisors: ";
    for(int x: ans){
        cout<<x<<" ";
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> divisors(int n){
            vector<int> results;
            for(int i=1; i*i<=n;i++){
                if(n%i==0){
                    results.push_back(i);
                    if(i!=n/i){
                        results.push_back(n/i);
                    }
                }
            }
            sort(results.begin(),results.end());
            return results;
        }
};
int main(){
    Solution sol;
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector<int> ans=sol.divisors(n);
    cout<<"divisors: ";
    for(int x: ans){
        cout<<x<<" ";
    }
    return 0;
}
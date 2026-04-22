#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix){
            vector<int> result;

            int top=0;
            int bottom=matrix.size()-1;
            int left=0;
            int right=matrix[0].size()-1;

            while(top<=bottom && left<=right){
                for(int i=left;i<=right;i++){
                    result.push_back(matrix[top][i]);
                }
                top++;

                for(int i=top;i<=bottom;i++){
                    result.push_back(matrix[i][right]);
                }
                right--;

                if(top<=bottom){
                    for(int i=right;i>=left;i--){
                        result.push_back(matrix[bottom][i]);
                    }
                    bottom--;
                }
                if(left<=right){
                    for(int i=bottom;i>=top;i--){
                        result.push_back(matrix[i][left]);
                    }
                    left++;
                }
            }
            return result;
        }
};

int main(){
    int m,n;
    cout<<"enter the rows and coloum of matrix: ";
    cin>>m>>n;

    vector<vector<int>> matrix(m,vector<int>(n));
    cout<<"enter the elements of matrix: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    Solution sol;
    vector<int> ans = sol.spiralOrder(matrix);
    cout<<"spiral order: ";
    for(int x: ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
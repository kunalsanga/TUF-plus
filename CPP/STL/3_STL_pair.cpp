#include<bits/stdc++.h>
using namespace std;
int main(){
    pair <int,string> student;
    student.first=1;
    student.second="cristiano";
    cout<<"roll no is "<<student.first<<" and name is "<<student.second<<endl;

    pair <pair<int,char>,int> complexpair={{2,'B'},20};
    cout<<"roll no: "<<complexpair.first.first<<",section "<<complexpair.first.second;
    cout<<", marks: "<<complexpair.second;

    

    return 0;
}
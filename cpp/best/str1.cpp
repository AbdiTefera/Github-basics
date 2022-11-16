#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="Learn c++ programming";
    char ch=' ';
    vector<string>v;
    istringstream streamData(str);
    string val;
    while(getline(streamData,val,ch)){
        v.push_back(val);
    }

    for(auto x:v){
        cout<<x<<endl;
    }
    return 0;
}
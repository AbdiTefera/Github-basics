#include<iostream>
#include<map>
using namespace std;
int main(){
    int a,n;
    string s;
    map<string,int>m;
    cin>>n;
    for(int i=0;i<n;i++){
        //getline(cin,s);
        cin>>a;
        cin>>s;
        m[s]=a;
    }
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
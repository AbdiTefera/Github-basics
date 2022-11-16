#include<iostream>
#include<map>
using namespace std;
int main(){
    string s,ch;
    getline(cin,ch);
    getline(cin,s);
    map<char,int>m;
    for(int i=0;i<s.size();i++){
        char l=s[i];
        if(s[i]==ch[i]){
            m[l]++;
        }
    }
    for(auto x:m){
        cout<<x.first<<x.second;
    }
}
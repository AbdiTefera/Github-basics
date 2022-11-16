#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    map<char,int>m;

    for(int i=0;i<s.size();i++){
        char letter=s[i];
        if(m.find(letter)==m.end()){
            m[letter]=0;
        }
        m[letter]++;
    }
    for(auto itr=m.begin();itr!=m.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}
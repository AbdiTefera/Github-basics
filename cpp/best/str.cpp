#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s_s=" ";
    getline(cin,s);
    vector<string>w;
      size_t pos=0;
    while((pos=s.find(s_s))!=string::npos){
        w.push_back(s.substr(0,pos));
        s.erase(0,pos+s_s.size());
    }
    for(auto x:s){
        cout<<x<<endl;
    }
    return EXIT_SUCCESS;

}

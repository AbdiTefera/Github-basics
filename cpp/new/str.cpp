#include<bits/stdc++.h>
using namespace std;
int main(){
    int space=0;
    string str;
char chr;
cin>>chr;
getline(cin, str);
for(int i=0; i<=str.length(); i++)
{
 	  if(str[i]==chr)
      {
        space++;
       }
}

}
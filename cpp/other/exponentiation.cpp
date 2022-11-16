#include<bits/stdc++.h>
using namespace std;

/////this is code is to find exponentiation 
// long long BinPow(long long a,long long n){
//     if(n==0)
//         return 1;
//         long long res=BinPow(a,n/2);
//         if(n%2)
//             return res*res*a;
//         else
//             return res*res;
    
// }

//////this is code is to find exponentiation 
// long long BinPow(long long a, long long b) {
//     long long res = 1;
//     while (b > 0) {
//         if (b & 1)
//             res = res * a;
//         a = a * a;
//         b >>= 1;
//     }
//     return res;
// }
////////when this one is to find modulo of exponentiation 
long long BinPow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main(){
    long long m,b,c;
    cin>>b>>m>>c;
    cout<<BinPow(b,m,c);
  return 0;
}
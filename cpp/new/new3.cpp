#include<iostream>
using namespace std;
int main(){
    int a[]={2,23,6,3,9};
    int min,max,n=sizeof(a)/sizeof(a[0]);
    min=max=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i])
        max=a[i];
        if(min>a[i])
        min=a[i];
    }
    cout<<"max: "<<max<<endl<<"min: "<<min<<endl;
}
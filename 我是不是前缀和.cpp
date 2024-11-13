#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,l,r;
    cin>>n>>l>>r;
    if(r-l>=n || r%n==0 && l<r){
        cout<<n-1;
    }else{
        if(l%n<=r%n){
            cout<<r%n;
        }
        if(l%n>r%n){
            cout<<n-1;
        }
    }
    return 0;
}
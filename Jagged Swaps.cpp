#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>n;
        int a[n]={};
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(a[0]==1){
            cout<<"YES"<<endl;
        }
        if(a[0]!=1){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
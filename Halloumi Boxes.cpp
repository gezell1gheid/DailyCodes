#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t,k;
    cin>>t;
    for(int m=0;m<t;m++){
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int flag=1;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                flag=0;
            }
        }
         if(flag==0 && k<2){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[110]={},b[110]={};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        int count=0;
        for(int j=0;j<i;j++){
            if(a[j]<a[i]) count++;
        }
        b[i]=count;
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
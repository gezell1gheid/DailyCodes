#include <bits/stdc++.h>
using namespace std;
int a[10010];
int main(){
    int l,m,u,v;
    cin>>l>>m;
    for(int k=0;k<m;k++){
        cin>>u>>v;
        for(int i=u;i<=v;i++){
            a[i]=1;
        }
    }
    int count=0;
    for(int i=0;i<=l;i++){
        if(a[i]==0) count++;
    }
    cout<<count;
    return 0;
}
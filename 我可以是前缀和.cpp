#include <bits/stdc++.h>
using namespace std;
char a[200010];
int d[200010];
//
int main(){
    int t,n,k;
    cin>>t;
    for(int m=0;m<t;m++){
        cin>>n>>k;
        int count=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            d[i]=d[i-1];
            if(a[i]=='W'){
                d[i]++;
            }
        }
        int ans=1000000000;
        for(int i=1;i<=n-k+1;i++){
            count=d[i+k-1]-d[i-1];
            ans=min(ans,count);
        }
        cout<<ans<<endl;
    }
    return 0;
}
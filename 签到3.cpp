#include <bits/stdc++.h>
using namespace std;
int l[2000010],r[2000010];
int main(){
    int n,m,x,ans=0;
    cin>>n>>m;
    int max1=-1,min1=1;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x>max1) max1=x;
        if(x<min1) min1=x;
        if(x>0){
            r[x]++;
        }else if(x==0){
            r[x]=1;
            l[x]=1;
        }else{
            l[-x]++;
        }
    }
    int max2=max(max1,-min1);
    for(int i=1;i<=max2;i++){
        l[i]+=l[i-1];
        r[i]+=r[i-1];
    }
    for(int i=0;i<=m;i++){
        if(i*2>m){
            ans=max(ans,r[i]+l[0]);
            ans=max(ans,l[i]+r[0]);
        }else{
            ans=max(ans,r[i]+l[m-i*2]);
            ans=max(ans,l[i]+r[m-i*2]);
        }
    }
    cout<<ans-r[0];
    return 0;
}
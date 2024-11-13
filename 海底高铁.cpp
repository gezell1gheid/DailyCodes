#include <bits/stdc++.h>
using namespace std;
long long p[100010],a[100010],b[100010],c[100010],d[100010];
int main(){
    long long n,m,sum=0;
    cin>>n>>m;
    for(int k=1;k<=m;k++){
        cin>>p[k];
        if(k>=2){
            if(p[k-1]<p[k]){
                d[p[k-1]]++;
                d[p[k]]--;
            }
            if(p[k-1]>p[k]){
                d[p[k-1]]--;
                d[p[k]]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        d[i]+=d[i-1];
    }
    for(int k=1;k<=n-1;k++){
        cin>>a[k]>>b[k]>>c[k];
    }
    for(int i=1;i<=n-1;i++){
        if(a[i]*d[i] < b[i]*d[i]+c[i]){
            sum+=a[i]*d[i];
        }else{
            sum+=b[i]*d[i]+c[i];
        }
    }
    cout<<sum;
    return 0;
}
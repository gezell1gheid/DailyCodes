#include <bits/stdc++.h>
using namespace std;
long long s[10010],d[10010];
int a[10010],b[10010];
int main(){
    int n;
    cin>>n;
    int l=0;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
        l+=b[i];
        s[i]=s[i-1]+b[i-1];
    }
    int m=1e9;
    int c;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=1;j<=n;j++){
            sum+=min(abs(s[j]-s[i]),l-abs(s[j]-s[i]))*a[j];
        }
        if(sum<m) m=sum,c=i;
    }
    cout<<c-1<<","<<m;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
const int N=2e6+10;
const int M=1e6;
double s[N],t[N];
int main(){
    int n,q,a,b,x;
    double y;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        s[x+M]=y;
    }
    t[0]=s[0];
    for(int i=1;i<=2e6;i++){
        t[i]=t[i-1]+s[i];
    }
    cin>>q;
    for(int i=1;i<=q;i++){
        cin>>a>>b;
        printf("%.6f\n",t[b+M]-t[a+M-1]);
    }
    return 0;
}
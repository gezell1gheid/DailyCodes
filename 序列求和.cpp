#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,n;
    cin>>x>>y>>n;
    long long a[20]={};
    a[0]=x+y;
    int sum=0;
    for(int i=1;i<=n;i++){
        a[i]=3*a[i-1]-a[0];
        sum=a[i];
    }
    cout<<sum;
}
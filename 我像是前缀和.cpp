#include <bits/stdc++.h>
using namespace std;
long long a[100010],d[100010];
int main(){
    int n;
    cin>>n;
    long long sum=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        d[i]=d[i-1]+a[i];
            if(d[i]>0 && i>=2){
                sum+=d[i];
            }
    }
    cout<<sum;
    return 0;
}
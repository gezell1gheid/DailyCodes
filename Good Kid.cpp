#include <bits/stdc++.h>
using namespace std;
int a[10000001];
int main(){
    int t,n,b;
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>n;
        long long c=1;
        int min=100000000;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<min){
                min=a[i];
                b=i;
            }
        }
        for(int i=0;i<n;i++){
            if(b==i){
                a[i]++;
            }
            c=c*a[i];
        }
        cout<<c<<endl;
        for(int i=0;i<n;i++){
            a[i]=0;
        }
    }
    return 0;
}
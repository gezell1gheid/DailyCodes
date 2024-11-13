#include <bits/stdc++.h>
using namespace std;
int main (){
    long long n;
    int a[100010];
    cin>>n;
    int i=1;
    a[0]=n;
    while(n!=1){
        if(n%2==1){
            n=n*3+1;
            a[i]=n;
        }else{
            n=n/2;
            a[i]=n;
        }
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<a[j]<<" ";
    }
    return 0;
}
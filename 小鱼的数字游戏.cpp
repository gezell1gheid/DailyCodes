#include <bits/stdc++.h>
using namespace std;
long long a[110];
int main(){
    int i;
    for(i=0;;i++){
        cin>>a[i];
        if(a[i]==0) break;
    }
    for(int j=i-1;j>=0;j--){
        cout<<a[j]<<" ";
    }
    return 0;
}
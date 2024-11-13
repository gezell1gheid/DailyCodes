#include <bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main(){
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    int x1=0,x2=0,y1=0,y2=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==0){
                x1=i;
                y1=j;
                break;
            }
        }
        if(x1!=0){
            break;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==0){
                x2=i;
                y2=j;
            }
        }
    }
    long long s;
    s=(x2-x1-1)*(y2-y1-1);
    cout<<s;
    return 0;
}
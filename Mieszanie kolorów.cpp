#include <bits/stdc++.h>
using namespace std;
int a[1000010],yellow[1000010],blue[1000010],red[1000010];
int main(){
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int n,m,l,r,k;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>l>>r;
        cin>>k;
        if(k==1){
            yellow[l]++;
            yellow[r+1]--;
        }
        if(k==2){
            blue[l]++;
            blue[r+1]--;
        }
        if(k==3){
            red[l]++;
            red[r+1]--;
        }
    }
    for(int i=1;i<=n;i++){
        yellow[i]+=yellow[i-1];
        blue[i]+=blue[i-1];
        red[i]+=red[i-1];
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(yellow[i]>0 && blue[i]>0 && red[i]==0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
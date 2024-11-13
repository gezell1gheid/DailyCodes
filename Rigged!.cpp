#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,s[110],e[110];
    cin>>t;
    for(int k=0;k<t;k++){
        int flag=1;
        cin>>n;
        cin>>s[0]>>e[0];
        int maxs=s[0];
        int maxe=e[0];
        for(int i=1;i<n;i++){
            cin>>s[i]>>e[i];
            if(s[i]>=maxs && e[i]>=maxe){
                flag=0;
            }
        }
        if(flag==1){
            cout<<maxs<<endl;
        }else{
            cout<<"-1"<<endl;
        }
        for(int i=0;i<n;i++){
            s[i]=0;
            e[i]=0;
        }
    }
    return 0;
}
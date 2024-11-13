#include <bits/stdc++.h>
using namespace std;
int d[10000010];
int main(){
    int t;
    cin>>t;
    string s;
    int q,l,r;
    for(int k=0;k<t;k++){
        cin>>s;
        int len=s.size();
        s='#'+s;
        int a;
        for(int i=1;i<=len;i++){
            if(s[i]=='P'){
                a=3;
            }
            if(s[i]=='p'){
                a=2;
            }
            if(s[i]=='G'){
                a=1;
            }
            if(s[i]=='g'){
                a=0;
            }
            if(s[i]=='m'){
                a=0;
            }
            d[i]=d[i-1]+a;
        }
        cin>>q;
        for(int i=0;i<q;i++){
            cin>>l>>r;
            cout<<d[r]-d[l-1]<<endl;
        }
        for(int i=1;i<=len;i++){
            d[i]=0;
        }
    }
    return 0;
}
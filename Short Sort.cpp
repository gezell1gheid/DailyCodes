#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    char x,y,z;
    string s;
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>s;
        x=s[0];
        y=s[1];
        z=s[2];
        if((x=='b' && y=='c' && z=='a') || (x=='c' && y=='a' && z=='b')){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
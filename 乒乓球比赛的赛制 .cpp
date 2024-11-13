#include <bits/stdc++.h>
using namespace std;
char s[1000000];
int i=0;
void bf(int n){
    int a=0,b=0;
    for(int j=0;j<i;j++){
        if(s[j]=='W') a++;
        if(s[j]=='L') b++;
        if((a>=n && a-b>=2) || (b>=n && b-a>=2)){
            cout<<a<<":"<<b<<endl;
            a=0;
            b=0;
        }
    }
    cout<<a<<":"<<b<<endl;
}
int main(){
    char c;
    while(cin>>c && c!='E'){
        s[i]=c;
        i++;
    }
    bf(11);
    cout<<endl;
    bf(21);
    return 0;
}
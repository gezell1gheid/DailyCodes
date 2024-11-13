#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a[30]={};
    char c;
    int len=s.size();
    for(int i=0;i<len;i++){
        c=s[i];
        a[c-'a']++;
    }
    int max=0;
    char b;
    for(int i=0;i<25;i++){
        if(a[i]>max){
            max=a[i];
            b=i+'a';
        } 
    }
    cout<<b<<" "<<max;
    return 0;
}
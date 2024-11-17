#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string ab,a="",b="";
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>ab;
        int flag=0;
        int len=ab.size();
        for(int i=0;i<len-1;i++){
            a=ab.substr(0,i+1);
            b=ab.substr(i+1,len-i-1);
            //cout<<a<<" "<<b<<endl;
            int aa = stoi(a) , bb = stoi(b);
            //cout << "aa= "  
            if(ab[i+1]!='0' && aa<bb){
                cout<<a<<" "<<b<<endl;
                flag=1;
                break;
            }            
        } 
        if(!flag){
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>n;
        if(n==1){
            cout<<"-1"<<endl;
            continue;
        }
        if(n==3){
            cout<<"-1"<<endl;
            continue;
        }
        if(n%2!=0){
            for(int i=0;i<n-5;i++){
                cout<<"3";
            }
            cout<<"36366";
        }else{
            for(int i=0;i<n-2;i++){
                cout<<"3";
            }
            cout<<"66";
        }
        cout<<endl;
    }   
    return 0;
}
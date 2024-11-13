#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;
    string x,s;
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>n>>m;
        cin>>x>>s;
        int flag=0;
        int count=0;
        while(flag==0){
            string::size_type idx;
            idx=x.find(s);
            if(idx == string::npos){
                flag=0;
                if(x.size()>2*s.size() && count>=2){
                    cout<<"-1"<<endl;
                    break;
                }
                x=x+x;
            }else{
                flag=1;
                cout<<count<<endl;
                break;
            }
            count++;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,x,a;
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>n>>x;
        int min=0;
        int b=0;
        for(int i=1;i<=n;i++){
            cin>>a;
            if(a-b>min){
                min=a-b;
            }
            b=a;
        }
        if(2*(x-a)>min){
            min=2*(x-a);
        }
        cout<<min<<endl;
    }
    return 0;
}
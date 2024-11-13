#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,x,p,q,l,r,t,s,count;
	cin>>n;
	for(int i=1;i<=n;i++){
		count=0;
		cin>>x>>p>>q>>l>>r>>t>>s;
		for(int k=l;k<r;k++){
			if(p<=((x+k*s)%t)<q && 0<=((x+k*s)%t)<t){
				count++;
				cout<<k<<" ";
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

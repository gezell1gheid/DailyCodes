#include<bits/stdc++.h>
using namespace std;
int main() {
	int i,n,k,m,a,b,flag=0;
	cin>>k>>m>>n;
	for (i=1; i<=m; i++) {
		cin>>a>>b;
		if(a==0&&b>0){
			cout<<i<<" ";
			flag=1;
			continue;
		}
		if(b==0){
			continue;
		}
		if(k/a*b>=n){
			cout<<i<<" ";
			flag=1;
		}
	}
	if(flag==0) {
		cout<<"-1";
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[100010];
long long d[1000000000];
int main(){
	int n,m,l,r;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		d[i]=a[i]+d[i-1];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>l>>r;
		cout<<d[r]-d[l-1]<<endl;
	}
	return 0;
}

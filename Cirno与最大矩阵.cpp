#include <bits/stdc++.h>
using namespace std;
int a[1010][1010],d[1010][1010];
int main() {
	int t,n,m,x,y,s;
	cin>>t;
	for(int k=1; k<=t; k++) {
		cin>>n>>m>>x>>y;
		long long max=0;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				cin>>a[i][j];
				d[i][j]=d[i-1][j]+d[i][j-1]-d[i-1][j-1]+a[i][j];
			}
		}
		for(int i=1; i<=n-x+1;i++){
			for(int j=1;j<=m-y+1;j++){
				s=d[i+x-1][j+y-1]-d[i+x-1][j-1]-d[i-1][j+y-1]+d[i-1][j-1];
				if(s>max){
					max=s;
				}
			}
		}
		cout<<max<<endl;
	}
	return 0;
}

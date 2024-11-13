#include <bits/stdc++.h>
using namespace std;
int a[1010][1010];
int d[1010][1010];
int main(){
	int n,m,q;
	int x1,x2,y1,y2;
	cin>>n>>m>>q;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			d[i][j]=d[i-1][j]+d[i][j-1]-d[i-1][j-1]+a[i][j];
		}
	}
	for(int i=1;i<=q;i++){
		int sum;
		cin>>x1>>y1>>x2>>y2;
		sum=d[x2][y2]-d[x1-1][y2]-d[x2][y1-1]+d[x1-1][y1-1];
		cout<<sum<<endl;
	}
	return 0;
}

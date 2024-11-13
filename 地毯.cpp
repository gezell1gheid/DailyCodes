#include <bits/stdc++.h>
using namespace std;
int d[1010][1010],e[1010][1010];
int main(){
	int n,m,x1,x2,y1,y2;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>x1>>y1>>x2>>y2;
		d[x1][y1]++;
		d[x2+1][y1]--;
		d[x1][y2+1]--;
		d[x2+1][y2+1]++;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			e[i][j]=e[i-1][j]+e[i][j-1]-e[i-1][j-1]+d[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<e[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

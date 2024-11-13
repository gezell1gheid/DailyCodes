#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	int n,m,r,x,y,count=0,
	a[101][101]={};
	cin>>n>>m>>r;
	for (int k=1;k<=m;k++){
		cin>>x>>y;
		a[x][y]=1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(sqrt((x-i)*(x-i)+(y-j)*(y-j))<=r){
					a[i][j]=1;
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1) count++;
		}
	}
	cout<<count;
	return 0;
}

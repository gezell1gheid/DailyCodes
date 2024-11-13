#include <bits/stdc++.h>
using namespace std;
int a[1010][1010],d[1010][1010];
int main(){
	int n,m,c,max=-2147483648,q,mi,mj;
	cin>>n>>m>>c;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			d[i][j]+=d[i-1][j]+d[i][j-1]-d[i-1][j-1]+a[i][j];
		}
	}
	for(int i=1;i<=n-c+1;i++){
		for(int j=1;j<=n-c+1;j++){
			q=d[i+c-1][j+c-1]-d[i+c-1][j-1]-d[i-1][j+c-1]+d[i-1][j-1];
			if(q>max){
				max=q;
				mi=i;
				mj=j;
			}
		}
	}
	cout<<mi<<" "<<mj;
	return 0;
} 

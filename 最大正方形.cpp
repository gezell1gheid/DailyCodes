#include <bits/stdc++.h>
using namespace std;
int a[110][110],d[110][110];
int main(){
	int n,m,c,max=0,min;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				max=1;
			}
			d[i][j]=d[i-1][j]+d[i][j-1]-d[i-1][j-1]+a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			for(int k=1;k<=(n<m?n:m);k++){
				int c=d[i+k-1][j+k-1]-d[i+k-1][j-1]-d[i-1][j+k-1]+d[i-1][j-1];
				if(k*k==c && k>max && k<n-i+1 && k<m-j+1){
					max=k;
				}
			}
		}
	}
	cout<<max;
	return 0;
} 

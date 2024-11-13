#include <bits/stdc++.h>
using namespace std;
int a[130][130],d[130][130];
int main(){
	int n,s,max=-1000;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			d[i][j]=d[i-1][j]+d[i][j-1]-d[i-1][j-1]+a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int ii=i+1;ii<=n;ii++){
				for(int jj=j+1;jj<=n;jj++){
					s=d[ii][jj]-d[ii][j-1]-d[i-1][jj]+d[i-1][j-1];
					if(s>max) max=s;
				}
			}
		}
	}
	cout<<max;
	return 0;
}

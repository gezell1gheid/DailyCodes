#include <bits/stdc++.h>
using namespace std;
char a[1010][1010],b;
int main(){
	int n,m,pi,pj,count=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			if(a[i][j]=='W' || a[i][j]=='S' || a[i][j]=='A' || a[i][j]=='D'){
				b=a[i][j];
				pi=i;
				pj=j;
			}
		}
	}
	if(b=='W'){
		for(int i=0;i<=pi;i++){
			if(a[i][pj]=='*'){
				count++;
			}
		}
	}
	if(b=='S'){
		for(int i=pi;i<n;i++){
			if(a[i][pj]=='*'){
				count++;
			}
		}
	}
	if(b=='A'){
		for(int j=0;j<=pj;j++){
			if(a[pi][j]=='*'){
				count++;
			}
		}
	}
	if(b=='D'){
		for(int j=pj;j<m;j++){
			if(a[pi][j]=='*'){
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}

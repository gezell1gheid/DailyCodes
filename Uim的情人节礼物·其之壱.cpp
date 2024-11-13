#include <bits/stdc++.h>
using namespace std;

int n,a[10],c=1,d[1000000][10],v[10];
void dfs(int u){
	if(u==n+1){
		for(int i=1;i<=n;i++){
			d[c][i]=a[i];
		}
		c++;
	}else{
		for(int i=1;i<=n;i++){
			if(v[i]==1) continue;
			a[u]=i;
			v[i]=1;
			dfs(u+1);
			v[i]=0;
		}
		
	}
}

int main(){
	int b[10]={},flag=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		if(a[i]!=b[i]) flag=1;
	}
	if(flag==0) cout<<"ERROR";
	else {
		dfs(1);
		int sum=1;
		for(int i=1;i<=n;i++){
			sum*=i;
		}
		for(int i=1;i<=sum;i++){
			int f=1;
			for(int j=1;j<=n;j++){
				if(d[i][j]!=b[j]) f=0;
			}
			if(f){
				for(int j=1;j<=n;j++) cout<<d[i-1][j]<<" ";
				cout<<endl;
				return 0; 
			}
		}
	}
	return 0;
}

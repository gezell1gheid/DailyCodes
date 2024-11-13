#include <bits/stdc++.h>
using namespace std;

int n;
int a[20];
int v[20];

void dfs(int u){
	if(u==n+1){
		for (int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}else{
		for(int i=1;i<=n;i++){
			if(v[i]!=0) continue; 
			a[u]=i;
			v[i]=1;
			dfs(u+1);
			v[i]=0;
		}
	}
	
}

int main(){
	cin>>n;
	dfs(1);
	return 0;
}

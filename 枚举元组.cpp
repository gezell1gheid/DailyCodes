#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[20];

void dfs(int u){
	if(u==n+1){
		for (int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}else{
		for(int i=1;i<=k;i++){ 
			a[u]=i;
			dfs(u+1);
		}
	}
	
}

int main(){
	cin>>n>>k;
	dfs(1);
	return 0;
}

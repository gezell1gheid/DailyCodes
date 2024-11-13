#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a[3010]={};
	cin>>n;
	int b[3010]={};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		if(a[i]-a[i-1]<0){
			b[a[i-1]-a[i]]=1;
		}
		if(a[i]-a[i-1]>0){
			b[a[i]-a[i-1]]=1;
		}
	}
	int flag=1;
	for(int i=1;i<=n-1;i++){
		if(b[i]==0){
			flag=0;
		}
	}
	if(flag==1){
		cout<<"Jolly";
	}else{
		cout<<"Not jolly";
	}
	return 0;
}

#include<bits/stdc++.h>
int a[10001];
using namespace std;
bool f(int z,int j){
	if(z==a[j]){
		return true;
	}
	if(z<0&&j!=0||z>0&&j==0){
		return false;
	}
	return f(z-a[j],j-1)||f(z,j-1);
}
int main(){
	int n,g,i;
	cin>>g>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	if(f(g,n)==true){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}

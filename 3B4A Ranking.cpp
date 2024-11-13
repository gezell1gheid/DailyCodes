#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k,b,m;
	cin>>n;
	int a[101];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	for(i=n-1;i>=0;i--){
		for(j=0;j<i;j++){
			if(a[j]<a[j+1]){
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
	}
	for(i=0;i<n;i++){
		if(a[i]==k){
			m=i+1;
			break;
		}
	}
	cout<<m;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[100000],b[301];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n+3;i++){
		for(int j=0;j<n+3;j++){
			for(int k=0;k<n+3;k++){
				if(i!=j && j!=k && i!=k){
					b[a[i]+a[j]+a[k]]=1;
				}
			}
		}
	}
	int count=0;
	for(int i=0;i<=300;i++){
		if(b[i]!=0) count++;
	}
	cout<<count;
	return 0;
}

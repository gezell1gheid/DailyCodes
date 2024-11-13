#include <bits/stdc++.h>
using namespace std;
int a[100];
int main(){
	int n,count=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(i==0){
			count=1;
		}else{
			if(a[i]!=a[i-1]){
				count++;
			}
		}
	}
	cout<<count<<endl;
	for(int i=0;i<n;i++){
		if(i==0){
			cout<<a[i]<<" ";
		}else{
			if(a[i]!=a[i-1]){
				cout<<a[i]<<" ";
			}
		}
	}
	return 0;
}

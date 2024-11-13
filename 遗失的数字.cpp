#include <bits/stdc++.h>
using namespace std;
int a[100000],b[100000];
int main(){
	int n,c,max=0,flag=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		c=a[i];
		b[c]++;
		if(a[i]>max) max=a[i];
	}
	for(int i=1;i<=max;i++){
		if(b[i]==0){
			cout<<i;
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<max+1;
	}
	return 0;
}

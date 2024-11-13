#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,maxa=-1000000,maxb=-1000000;
	long long a,b;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a>maxa) maxa=a;
	}
	for(int i=0;i<m;i++){
		cin>>b;
		if(b>maxb) maxb=b;
	}
	cout<<maxa+maxb;
	return 0;
}

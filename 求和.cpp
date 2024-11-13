#include <bits/stdc++.h>
using namespace std;
long long a[200001],s[200001];
int main(){
	long long n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		s[i]=s[i+1]+a[i];
	}
	for(int i=1;i<=n-1;i++){
		sum+=a[i]*s[i+1];
	}
	cout<<sum;
	return 0;
}

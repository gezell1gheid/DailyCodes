#include <bits/stdc++.h>
using namespace std;
long long a[300010],w[300010],s[300010],ss[300010];
int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		s[i]=s[i-1]+a[i];
		ss[i]=ss[i-1]+s[i];
	}
	for(int i=1; i<=n; i++) {
		cin>>w[i];
	}
	long long ans=0;
	for(int i=1;i<=n;i++){
		ans+=(ss[n]-ss[n-i]-ss[i-1])%(1000000007)*w[i];
		ans%=(1000000007);
	}
	cout<<ans%(1000000007);
	return 0;
}

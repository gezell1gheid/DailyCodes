#include <bits/stdc++.h>
using namespace std;
int a[5000000];
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<a[k];
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[100010];
int main(){
	int n,min=100000;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(abs(a[i])<min){
			min=abs(a[i]);
		}
	}
	cout<<min;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[110];
int main(){
	int n;
	cin>>n;
	a[1]=1;
	int len=1;
	for(int i=1;i<=n;i++){
		int t=0;
		for(int j=1;j<=len;j++){
			a[j]=a[j]*2+t;
			t=a[j]/10;
			a[j]%=10;
		}
		if(t>0){
			a[++len]=t;
		}
	}
	for(int i=len;i>=1;i--){
		cout<<a[i];
	}
	return 0;
}

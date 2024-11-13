#include <bits/stdc++.h>
using namespace std;
int a[100010],d[100010];
int main(){
	int n,s,count=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		d[i]=d[i-1]+a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			s=d[j]-d[i-1];
			int t=sqrt(s);
			if(t*t==s){
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}

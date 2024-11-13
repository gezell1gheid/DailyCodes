#include <bits/stdc++.h>
using namespace std;
int a[200010],b[200010];
int main(){
	int t,n;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>n;
		for(int j=1;j<=n;j++){
			cin>>b[j];
		}
		int count=1;
		for(int j=2;j<=n;j++){
			if(b[j]==b[j-1]+1 || b[j]==b[j-1] || b[j]>b[j-1]){
				count++;
			}
			if(b[j]<b[j-1]){
				count+=2;
			}
		}
		cout<<count<<endl;
		cout<<b[1]<<" ";
		for(int j=2;j<=n;j++){
			if(b[j]==b[j-1]+1 || b[j]==b[j-1] || b[j]>b[j-1]){
				cout<<b[j]<<" ";
			}
			if(b[j]<b[j-1]){
				cout<<b[j]<<" "<<b[j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

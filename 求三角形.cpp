#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,i,j,sum=0,count=1;
	cin>>n;
	for (i=1; i<=n*n; i++) {
		if(i%n==0) {
			if(i<10) {
				cout<<"0"<<i;
			} else {
				cout<<i;
			}
			cout<<endl;
		} else {
			if(i<10) {
				cout<<"0"<<i;
			} else {
				cout<<i;
			}
		}
	}
	cout<<endl;
	for (i=1;i<=n;i++){
		sum+=i;
		for(j=1;j<=n-i;j++){
			cout<<"  ";
		}
		for(j=count;j<=sum;j++){
			if(j<10) {
				cout<<"0"<<j;
			} else {
				cout<<j;
			}
			count++;
		}
		cout<<endl;
	}
		return 0;
}

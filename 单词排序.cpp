#include<bits/stdc++.h>
using namespace std;
int main() {
	string a;
	string b[101],d;
	int m,i,j;
	m=0;
	while(cin>>a) {
		b[m]=a;
		m++;
	}
	for(i=m; i>=0; i--) {
		for(j=0; j<i; j++) {
			if(b[j]>b[j+1]) {
				d=b[j];
				b[j]=b[j+1];
				b[j+1]=d;
			}
		}
	}
	string t;
	t=b[0];
	cout<<t<<" ";
	for(i=1; i<=m; i++) {
		if(b[i]!=t){
			cout<<b[i]<<" ";
			t=b[i];
		}
	}
	return 0;
}

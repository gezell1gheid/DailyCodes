#include<bits/stdc++.h>
using namespace std;
int main() {
	int m,n,d,c,cnt=0,i,j,a[100001],b[21],flag=0;
	cin>>m>>n;
	for(i=0; i<n; i++) {
		cin>>a[i];
	}
	for(i=n-1; i>0; i--) {
		for(j=0; j<i; j++) {
			if(a[j]>a[j+1]) {
				d=a[j];
				a[j]=a[j+1];
				a[j+1]=d;
			}
		}
	}
	c=(m-1)*50+100;
	for(i=n-1; i>=0; i--) {
		if(a[i]>=c) {
			cnt++;
		}
	}
	if(cnt!=0) {
		flag=1;
	}
	for(i=0; i<n; i++) {
		if(a[i]<100) {
			b[1];
		} else {
			for(j=100; j<c; j=j+50) {
				b[a[i]/50]++;
			}
		}
	}
	for(i=m-1; i>0; i--) {
		for(j=0; j<i; j++) {
			if(b[i]<b[i+1]) {
				d=b[i];
				b[i]=b[i+1];
				b[i+1]=d;
			}
		}
	}
	d=b[0];
	cout<<d<<endl;
	for(i=0; i<n; i++) {
		if(d==b[i]) {
			d=b[i];
			cout<<d<<endl;
		}else{
			break;
		}
	}
	if(flag==1){
		cout<<"Others:"<<cnt;
	}
	return 0;
}

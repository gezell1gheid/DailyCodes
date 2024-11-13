#include <bits/stdc++.h>
using namespace std;
int a[500010],b[500010];
int main() {
	int n,na,nb,aa=0,bb=0,c,d;
	cin>>n>>na>>nb;
	for(int i=0;i<na;i++){
		cin>>a[i];
	}
	for(int i=0;i<nb;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		c=a[i%na];
		d=b[i%nb];
		if(c==0 && (d==2 || d==3)) aa++;
		if(c==1 && (d==0 || d==3)) aa++;
		if(c==2 && (d==1 || d==4)) aa++;
		if(c==3 && (d==2 || d==4)) aa++;
		if(c==4 && (d==0 || d==1)) aa++;
		if(d==0 && (c==2 || c==3)) bb++;
		if(d==1 && (c==0 || c==3)) bb++;
		if(d==2 && (c==1 || c==4)) bb++;
		if(d==3 && (c==2 || c==4)) bb++;
		if(d==4 && (c==0 || c==1)) bb++;
	}
	cout<<aa<<" "<<bb;
	return 0;
}

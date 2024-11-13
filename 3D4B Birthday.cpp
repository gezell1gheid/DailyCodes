#include<bits/stdc++.h>
using namespace std;
struct Stu {
	string mz;
	int m;
	int d;
} a[181];
int main() {
	int n,t,b,c;
	int flag=0;
	cin>>n;
	int i,j;
	for(i=0; i<n; i++) {
		cin>>a[i].mz>>a[i].m>>a[i].d;
	}
	for(i=n-1; i>0; i--) {
		for(j=0; j<i; j++) {
			if(a[i].m>a[i+1].m) {
				t=a[i].m;
				a[i].m=a[i+1].m;
				a[i+1].m=t;
			}
		}
	}
	for(i=n-1; i>0; i--) {
		for(j=0; j<i; j++) {
			if(a[i].m==a[i+1].m&&a[i].n>a[i+1].n) {
				b=a[i].n;
				a[i].n=a[i+1].n;
				a[i+1].n=b;
			}
		}
	}
	for(i=0; i<n; i++) {
		cout<<a[i].mz<<" "<<a[i].m<<" "<<a[i].d<<endl;
	}
	for(j=0; j<n; j++) {
		c=0;
		for(i=0; i<n; i++) {
			if(a[i].m==a[i+1].m||a[i].n==a[i+1].n) {
				c++;
			}else{
				break;
			}
		}
	}


	return 0;
}

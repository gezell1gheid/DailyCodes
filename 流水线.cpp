#include<bits/stdc++.h>
using namespace std;
struct A {
	int x;
	int y;
} a[1001];
int main() {
	int n,i,j;
	int d;
	cin>>n;
	for(i=0; i<n; i++) {
		cin>>a[i].x>>a[i].y;
	}
	for(i=n-1; i>=0; i--) {
		for(j=0; j<i; j++) {
			if(a[i].x>a[i].y) {
				d=a[i].x;
				a[i].x=a[i].y;
				a[i].y=d;
			}
		}
	}
	for(i=0; i<n; i++) {
		if(a[i].x!=a[i].y){
			cout<<a[i].x<<" "<<a[i].y<<endl;
		}else{
			cout<<a[i].x<<endl;
		}
	}
	return 0;
}

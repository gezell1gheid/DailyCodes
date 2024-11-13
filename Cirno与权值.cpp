#include <bits/stdc++.h>
using namespace std;
int d[100000001],e[100000001];
int main() {
	long long t,a,b,max=0,max1,max2;
	int c[10]= {0,1,2,3,4,5,6,7,8,9};
	cin>>t;
	for(int k=1; k<=t; k++) {
		cin>>a>>b;
		max1=0;
		max2=0;
		
		for(int i=a; i<=b; i++) {
			e[d[i]]++;
			if(d[i]>max) {
				max=d[i];
			}
		}
		for(int j=1; j<=max; j++) {
			if(e[j]>max1) {
				max1=e[j];
				max2=j;
			}
		}
		cout<<max2<<endl;
		for(int i=a; i<=b; i++) {
			e[d[i]]--;
		}
		for(int i=a; i<=b; i++) {
			int x=i;
			while(x!=0) {
				d[i]+=c[x%10];
				x=x/10;
			}
		}
	}
	return 0;
}

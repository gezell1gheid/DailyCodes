#include <bits/stdc++.h>
using namespace std;
long long d[10000010];
int main(){
	int t,a,b,x,s;
	cin>>t;
	d[0]=0;
	int c[10]={1,0,0,0,1,0,1,0,2,1};
	for(int i=1;i<=1e7;i++){
		x=i;
		s=0;
		while(x!=0){
			s+=c[x%10];
			x=x/10;
		}
		d[i]=d[i-1]+s;
	}
	for(int k=1;k<=t;k++){
		cin>>a>>b;
		cout<<d[b]-d[a-1]<<endl;
	}
	return 0;
}

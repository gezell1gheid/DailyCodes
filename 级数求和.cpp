#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,i;
	double n,sn=0;
	cin>>k;
	for (i=1;i<1000000;i++){
		sn+=1.0/i;
		if (sn>k){
			n=i;
			break;
		}
	}
	cout<<n;
	return 0;
}

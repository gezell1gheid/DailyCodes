#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,f1,f2;
	cin>>n;
	f1=5*n;
	f2=11+3*n;
	if(f1<f2){
		cout<<"Local";
	}
	if(f1>f2){
		cout<<"Luogu";
	}
	return 0;
}

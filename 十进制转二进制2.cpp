#include<bits/stdc++.h>
using namespace std;
long long erjz(int n){
	if(n>0){
		erjz(n/2);
		cout<<n%2; 
	}
}
int main(){
	int n;
	cin>>n;
	erjz(n);
	return 0;
}

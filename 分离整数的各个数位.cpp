#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	while(n){
		cout<<n%10<<" ";
		n/=10;
	}
	return 0;
}

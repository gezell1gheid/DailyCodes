#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,t,k,c;
	cin>>t;
	for(int i=0; i<t; i++) {
		int count=0;
		cin>>n>>k;
		if(k==1){
			cout<<n<<endl;
			continue;
		}
		while(n){
			count+=n%k;
			n/=k;
		}
		cout<<count<<endl;
	}
	return 0;
}

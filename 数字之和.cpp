#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	if(n==2 || n==1){
		cout<<"NO";
	}else{
		cout<<"YES"<<endl;
		cout<<"1"<<" "<<n-1;
	}
	return 0;
}

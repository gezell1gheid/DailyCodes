#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,k;
	cin>>m>>k;
	int count=0;
	int flag=1;
	if(m%19!=0){
		flag=0;
	}
	while(m){
		if(m%10==3){
			count++;
		}
		m/=10;
	}
	if(count!=k){
		flag=0;
	}
	if(flag==1){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}

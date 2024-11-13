#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x,y,m,s;
	cin>>t;
	for (int i=0;i<t;i++){
		cin>>n;
		cin>>x>>y;
		if(x>=y){
			m=y;
		}else{
			m=x;
		}
		if(n%m!=0){
			s=n/m+1;
		}else{
			s=n/m;
		}
		cout<<s<<endl;
	}
	
	return 0;
}

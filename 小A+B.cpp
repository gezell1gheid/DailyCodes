#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,a[100]={},g,s;
	cin>>t;
	for (int i=0;i<t;i++){
		cin>>a[i];
		g=a[i]%10;
		s=a[i]/10;
		cout<<g+s<<endl;
	}
	return 0;
}

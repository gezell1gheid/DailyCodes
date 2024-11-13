#include<iostream>
using namespace std;
int main(){
	int n,i,m;
	m=1; 
	cin>>n;
	for (i=1;i<n;i++){
		m=(m+1)*2;
	}
	cout<<m;
	return 0;
}

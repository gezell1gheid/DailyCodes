#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[2]={};
	cin>>a[0]>>a[1];
	sort(a,a+2);
	if(a[0]==1 && a[1]==2){
		cout<<"3";
	}else if(a[0]==1 && a[1]==3){
		cout<<"2";
	}else{
		cout<<"1";
	} 
	return 0;
}

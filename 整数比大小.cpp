#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	int x,y;
	cin>>x>>y;
	if(x>y){
		cout<<">";
	}else{
		if(x==y){
			cout<<"=";
		}else{
			cout<<"<";
		}
	}
	return 0;
}

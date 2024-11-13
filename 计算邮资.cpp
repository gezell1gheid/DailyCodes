#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,q=0;
	char c;
	cin>>x>>c;
	if(x<=1000){
		q=8;
	}else{
		q=8;
		q+=((x-1000-1)/500+1)*4;
	}
	if(c=='y'){
		q+=5;
	}
	cout<<q;
	return 0;
}

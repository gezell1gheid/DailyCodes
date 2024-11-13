#include <bits/stdc++.h>
using namespace std;

void time(int u) {
	int h,m;
	h=u/60;
	m=u%60;
	if(h<=7) {
		if(60-m<10){
			cout<<"0"<<7-h<<":0"<<60-m;
		}else{
			cout<<"0"<<7-h<<":"<<60-m;
		}
	} else {
		if(60-m<10){
			cout<<31-h<<":0"<<60-m;
		}else{
			cout<<31-h<<":"<<60-m;
		}
	}
}

int main() {
	int s,v,t;
	cin>>s>>v;
	t=(s-1)/v+11;
	time(t);
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[10],h,count=0;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	cin>>h;
	for(int i=0;i<10;i++){
		if(h+30>=a[i]){
			count++;
		}
	}
	cout<<count;
	return 0;
} 

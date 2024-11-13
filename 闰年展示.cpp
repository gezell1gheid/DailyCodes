#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,x,y,count=0;
	cin>>x>>y;
	for(i=x;i<=y;i++){
		if((i%4==0&&i%100!=0)or(i%400==0)){
			count++;
		}
	}
	cout<<count<<endl;
	for(i=x;i<=y;i++){
		if((i%4==0&&i%100!=0)or(i%400==0)){
			cout<<i<<" ";
		}
	}
	return 0;
} 

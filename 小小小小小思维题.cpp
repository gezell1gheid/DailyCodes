#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,y;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>x>>y;
		if(y<=-2){
			cout<<"NO";
		}else{
			cout<<"YES";
		}
		cout<<endl; 
	}
	return 0;
}

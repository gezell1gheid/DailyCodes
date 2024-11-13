#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n,a[20],c=0;
	cin>>m;
	while(m>0){
		for(int i=10;i>=0;i--){
			if(pow(3,i)<=m){
				a[c]=i;
				c++;
				m-=pow(3,i);
				break;
			}
		}
	}
	cout<<c<<endl;
	for(int i=0;i<c;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

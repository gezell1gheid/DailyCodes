#include <bits/stdc++.h>
using namespace std;
int main(){
	char c;
	cin>>c;
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=(i*2)-1;j++){
			cout<<c;
		}
		cout<<endl;
	}
	return 0;
}

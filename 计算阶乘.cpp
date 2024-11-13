#include <iostream>
using namespace std;
int cheng(int n){
	if (n==1){
		return 1;
	}else{
		return n*cheng(n-1);
	}
}
int main(){
	int n;
	cin>>n;
	cout<<cheng(n);
	return 0;
}

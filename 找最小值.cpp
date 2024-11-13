#include <iostream>
using namespace std;
int main(){
	int n,i,min,a;
	cin>>n;
	cin>>min;
	for(i=1;i<n;i++){
		cin>>a; 
		if (a<min){
			min=a;
		}
	}
	cout<<min;
	return 0;
}

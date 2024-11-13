#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	int a,b,i;
	srand(unsigned(time(0)));
	b = rand()%100;
	for(i=0; i<1000; i++) {
		cin>>a;
		if(a>b) {
			cout<<"偏大"<<endl<<"请继续猜数"<<endl;
		}
		if(a<b) {
			cout<<"偏小"<<endl<<"请继续猜数"<<endl;
		}
		if(a==b) {
			cout<<"正确";
			break;
		}
	}
	return 0;
}

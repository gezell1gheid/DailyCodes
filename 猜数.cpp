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
			cout<<"ƫ��"<<endl<<"���������"<<endl;
		}
		if(a<b) {
			cout<<"ƫС"<<endl<<"���������"<<endl;
		}
		if(a==b) {
			cout<<"��ȷ";
			break;
		}
	}
	return 0;
}

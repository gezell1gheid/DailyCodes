#include<bits/stdc++.h>
using namespace std;
int main(){
	int q[102]={0,6,3,1,7,5,8,9,2,4},head,tail,i;
	head=1;
	tail=10;
	while(head<tail){
		cout<<q[head];
		head++;
		q[tail]=q[head];
		tail++;
		head++;
	}
	return 0;
}

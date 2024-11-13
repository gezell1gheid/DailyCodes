#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,t1,t2,t,h,m;
	cin>>a>>b>>c>>d;
	t1=a*60+b;
	t2=c*60+d;
	t=t2-t1;
	h=t/60;
	m=t%60;
	cout<<h<<" "<<m;
	return 0;
}

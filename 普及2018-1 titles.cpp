#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	int n=a.size();
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]>='0'&&a[i]<='9'||a[i]>='a'&&a[i]<='z'||
		a[i]>='A'&&a[i]<='Z'){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}

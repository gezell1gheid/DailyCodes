#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int l;
	cin>>s;
	l=s.size();
	for(int i=0;i<l;i++){
		if(s[i]!='.'){
			cout<<s[i];
		}
	}
	return 0;
}

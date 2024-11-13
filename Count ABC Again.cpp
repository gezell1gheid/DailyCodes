#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,q,x,num=0;
	string s;
	char c;
	cin>>n>>q>>s;
	for(int i=0;i<n-2;i++){
		if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C'){
			num++;
		}
	}
	while(q--){
		cin>>x>>c;
		x=x-1;
		if(c==s[x]){
			cout<<num<<endl;
			continue;
		}
		if(x+3<=n && s[x]=='A' && s[x+1]=='B' && s[x+2]=='C') num--;
		if(x+2<=n && s[x-1]=='A' && s[x]=='B' && s[x+1]=='C') num--;
		if(s[x-2]=='A' && s[x-1]=='B' && s[x]=='C') num--;
		s[x]=c;
		if(c=='A' && s[x+1]=='B' && s[x+2]=='C') num++;
		if(x>=1 && s[x-1]=='A' && c=='B' && s[x+1]=='C') num++;
		if(x>=2 && s[x-2]=='A' && s[x-1]=='B' && c=='C') num++;
		cout<<num<<endl;
	}
	return 0;
}

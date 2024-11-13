#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<string> s(1000);
	int n,flag,count=0,len;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		flag=1;
		len=s[i].size();
		for(int j=0;j<len-1;j++){
			if(s[i][j]!=s[i][j+1]){
				flag=0;
			}
		}
		if(flag==1) count++;
	}
	cout<<count;
	return 0;
}

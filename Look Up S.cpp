#include <bits/stdc++.h>
using namespace std;
int h[1000000],ans[1000000];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>h[i];
	}
	stack <int> st;
	for(int i=1;i<=n;i++){
		while(!st.empty() && h[st.top()]>=h[i]){
			st.pop();
		}
		if(st.empty()){
			ans[i]=0;
		}else{
			ans[i]=st.top();
		}
		st.push(i);
	}
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}

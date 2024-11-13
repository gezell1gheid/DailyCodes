#include <bits/stdc++.h>
using namespace std;
string func7(int num) {
	if(num==0) {
		return 0;
	}
	string s,res="";
	while(num>0) {
		s=to_string(num%7);
		num/=7;
		res=s+res;
	}
	return res;
}
string func9(int num) {
	if(num==0) {
		return 0;
	}
	string s,res="",res1="";
	while(num>0) {
		s=to_string(num%9);
		num/=9;
		res=s+res;
	}
	int l=res.size();
	for(int i=l-1; i>=0; i--) {
		res1+=res[i];
	}
	return res1;
}
int main() {
	for(int i=100; i<1000; i++) {
		int length7=func7(i).size();
		int length9=func9(i).size();
		if(length7==3 && length9==3 && func7(i)==func9(i)) {
			cout<<i<<endl;
			cout<<stoi(func7(i))<<endl;
			for(int j=2; j>=0; j--) {
				cout<<func9(i)[j];
			}
		}
	}
	return 0;
}

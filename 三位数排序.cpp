#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,max,min,mid;
	cin>>a>>b>>c;
	if(a>=b){
		if(b>=c){
			max=a;
			mid=b;
			min=c;
		}else{
			if(a>=c){
				max=a;
				mid=c;
				min=b;
			}else{
				max=c;
				mid=a;
				min=b;
			}
		}
	}else{
		if(b>=c){
			if(a>=c){
				max=b;
				mid=a;
				min=c;
			}else{
				max=b;
				mid=c;
				min=a;
			}
		}else{
			max=c;
			mid=b;
			min=a;
		}
	}
	cout<<min<<" "<<mid<<" "<<max;
	return 0;
}

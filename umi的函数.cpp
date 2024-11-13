#include <iostream>
using namespace std;
int main(){
	string x,y,z;
	int n,i;
	cin>>n;
	cin>>x>>y;
	for (i=0;i<n;i++){
		if (x[i]<y[i]){
			cout<<"-1";
			return 0;
		}else{
			if (x[i]==y[i] and x[i]!='z'){
					z+=x[i]+1;
				}else{
					z+=y[i];
				}
		}
	}
	cout<<z;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    long long n;
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>n;
        long long temp=1;
        while(temp<=n){
            temp*=2;
        }
        temp/=2;
        cout<<temp<<endl;
    }
	return 0;
}
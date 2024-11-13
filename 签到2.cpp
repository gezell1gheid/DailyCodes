#include <bits/stdc++.h>
using namespace std;
int a[1010][1010],d[1010][1010];
int main(){
    int n,m,c,e,f;
    cin>>n>>m>>c;
    for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			d[i][j]+=d[i-1][j]+d[i][j-1]-d[i-1][j-1]+a[i][j];
		}
	}
    long long max=-1000000000000;
    for(int i=1;i<=n-c+1;i++){
        for(int j=1;j<m-c+1;j++){
            if(d[i+c-1][j+c-1]-d[i+c-1][j-1]-d[i-1][j+c-1]+d[i-1][j-1]>max){
                max=d[i+c-1][j+c-1]-d[i+c-1][j-1]-d[i-1][j+c-1]+d[i-1][j-1];
                e=i;
                f=j;
            }
        }
    }
    cout<<e<<" "<<f;
    return 0;
}
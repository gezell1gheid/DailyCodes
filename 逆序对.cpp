#include <bits/stdc++.h>
using namespace std;
int n,a[500010],b[500010];
long long res;

void msort(int l,int r){
	if(l==r) return;
	int mid=(l+r)/2;
	msort(l,mid);
	msort(mid+1,r);
	
	int i=l,j=mid+1,k=l;
	while(i<=mid && j<=r){
		if(a[i]<=a[j]) b[k++]=a[i++];
		else b[k++]=a[j++],res+=mid-i+1;
	}
	while(i<=mid) b[k++]=a[i++];
	while(j<=r) b[k++]=a[j++];
	for(i=l;i<=r;i++) a[i]=b[i];
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	msort(1,n);
	cout<<res;
	return 0;
} 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	double a[300]={},c,max,min,sum,avr,d,x,maxc=0;
	cin>>n;
	cin>>a[0];
	max=min=sum=a[0];
	for (i=1;i<n;i++){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
			d=i;
		}
		if(a[i]<min){
			min=a[i];
			x=i;
		}
		sum+=a[i];
	}
	sum=sum-max-min;
	avr=sum/(n-2);
	for (i=0;i<n;i++){
		if(i==d||i==x){
			continue;
		}
		if(a[i]<=avr){
			c=avr-a[i];
		}else{
			c=a[i]-avr;
		}
		if(c>maxc){
			maxc=c;
		}	
	}
	cout<<fixed<<setprecision(2);
	cout<<avr<<" "<<maxc;
	return 0;
}

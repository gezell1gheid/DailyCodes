#include <bits/stdc++.h>
using namespace std;

int sum(int n,int m,int d){
    int i;
    int dic[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int p=0;
    for(i=1;i<n;i++){
        p+=365;
        if(i%4==0 && i%100!=0 || i%400==0){
            p+=1;
        }
    }
    if(i%4==0 && i%100!=0 || i%400==0){
        dic[2]=29;
    }
    for(i=1;i<m;i++){
        p+=dic[i];
    }
    p+=d;
    return p;
}
int main(){
    int sy,sm,sd,ey,em,ed,day=0;
    cin>>sy>>sm>>sd>>ey>>em>>ed;
    cout<<sum(ey,em,ed)-sum(sy,sm,sd);
    return 0;
}
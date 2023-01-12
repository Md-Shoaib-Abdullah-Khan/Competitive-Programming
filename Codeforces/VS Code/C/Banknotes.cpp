#include<bits/stdc++.h>
using namespace std;
long long power(long long n){
    long long i=1, num=1;
    while(i<=n){
        num=num*10;
        i++;
    }
    return num;
}
int main(){
long long t,p=9;
cin>>t;
while(t--){
    int n,m;
    long long a[10],sum=0,c=0,k=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>m;
        a[i]=power(m);
    }
    k=k+1;
    for(int i=0;i<n;i++){
        c=k;
       if(i+1<n){
        c=min(k,a[i+1]/a[i]-1);
       }
       k-=c;
       sum+=c*a[i];
    }
   cout<<sum<<endl; 
}


}
#include<iostream>
using namespace std;

void solve(){
    int n,k,i,j;

    cin>>n>>k;
    long long arr[n+5];


    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(i=0;i<n;i++){
        arr[i%k] = max(arr[i%k], arr[i]);
    }
    long long sum=0;
    for(i=0;i<k;i++){
        sum += arr[i];
    }
    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
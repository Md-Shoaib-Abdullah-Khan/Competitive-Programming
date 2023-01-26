#include<bits/stdc++.h>
using namespace std;
void solve(){
long long a,b,c,d,alice,bob,temp,jokes;
cin>>a>>b>>c>>d;
bob=alice=jokes=a;
while(b>0 || c>0 || d>0){
    if(bob>0 && b>0){
        temp=min(b,bob);
        bob-=temp;
        alice+=temp;
        jokes+=temp;
        b-=temp;
    }
    else if(alice>0 && c>0){
        temp=min(c,alice);
        alice-=temp;
        bob+=temp;
        jokes+=temp;
        c-=temp;
 
    }
    else if(alice>0 && bob>0 && d>0){
        temp=min(d,min(alice,bob));
        jokes+=temp;
        alice-=temp;
        bob-=bob;
        d-=temp;
 
    }
    else{
        if(b!=0 || c!=0 || d!=0){
            jokes++;
            break;
        }
    }
}
cout<<jokes<<endl;
}
int main(){
    
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}

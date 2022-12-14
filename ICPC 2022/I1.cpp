//MD. HASNAIN ALI (UNSOLVED)
#include <bits/stdc++.h>

#define ll long long
#define pii pair<int,int>

#define distance(a,b) (sq(a.x-b.x) + sq(a.y-b.y))
#define MAX3(a,b,c) max(a,max(b,c))
#define SQ(x) ((x) * (x))
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define end "\n";

using namespace std;

double BS(double ab,double bc,double ac,double r);
double tri_ratio(double ab,double bc,double ac,double ad);
ll L,W;
int main()
{
    int t,i;
     
    while(1){
        cin>>L>>W;
        if(L==0 && W==0)break;
        BS(L/2,L, 1000000);
    }
    
    return 0;
}

double BS(double low,double high,double r)
{
    int i;
    double mid,ad;

    for(i=0;i<=1000;i++)
    {
        mid=(high+low)/2;

        if(dis(mid)>r)
        {
            high=mid;
        }
        else
        {
            low=mid;
        }
    }
    return ad;
}
double dis(double r)
{

    return 2*r + W - sqrt(r*r - (L-r)*(L-r));
}
#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,c=0,n,m,d,x,y,e,f,r,g,h,i,j,k,l,o,p,q,t,u;
    scanf("%lld%lld%lld%lld%lld",&a,&b,&n,&k,&l);

    c=a/k;
    d=b/l;
    if(a%k!=0){c++;}
    if(b%l!=0){d++;}

    if(c+d<=n){printf("YES\n");}
    else{printf("NO\n");}

}

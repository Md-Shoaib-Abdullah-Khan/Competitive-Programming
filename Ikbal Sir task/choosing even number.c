#include<stdio.h>
int fact(int n)
{int i,a=1;
for(i=1;i<=n;i++){a=a*i;}

return a;

}
int main()
{
    long long int b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]%2==0){c++;}
    }
    scanf("%lld",&k);

    r=fact(c)/(fact(c-k)*fact(k));
    printf("%lld\n",r);
}

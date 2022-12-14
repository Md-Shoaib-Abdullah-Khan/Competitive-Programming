#include<stdio.h>
#include<string.h>
#include<math.h>
long long int fact(long long int n)
{
    long long int a=1,i=1;
    for(;i<=n;i++){a=a*i;}
    return a;
}
int main()
{
    long long int ans=0,ans1=0,ans2=0,ans3=0,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,p1=0,p2=0,m1=0,m2=0,q=0,r,s,t,u,v,w,z;


    scanf("%lld",&n);


        ans1 = (n/1*(n-1)/2*(n-2)/3*(n-3)/4*(n-4)/5);
        ans2= (n/1*(n-1)/2*(n-2)/3*(n-3)/4*(n-4)/5*(n-5)/6);
        ans3= n/1*(n-1)/2*(n-2)/3*(n-3)/4*(n-4)/5*(n-5)/6*(n-6)/7;

    printf("%lld\n",ans1+ans2+ans3);

}

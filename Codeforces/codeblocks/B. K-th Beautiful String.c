#include<stdio.h>
int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,z;

    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {

        scanf("%lld%lld",&n,&k);


        for(j=1;;j++)
        {
        c=j+((j-1)*j)/2;

        if(c>=k){break;}
        }
        d=j-1;
        d=d+(d*(d-1))/2;
        d=k-d;
        j++;
        for(k=n;k>0;k--)
        {
            if(k==d||k==j){printf("b");}
            else{printf("a");}
        }
        printf("\n");

    }
}

#include<stdio.h>
int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,z;
    char x[10000],y[10000];
scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld",&n,&k);
        if(n%2==0)
        {
            if(k*2<=n)
            {
                printf("YES\n");
                for(j=0;j<k;j++)
                {
                if(j!=k-1){printf("2 ");}
                else if(j==k-1){printf("%lld\n",n-(k-1)*2);}
                }
            }
            else if(k%2==0&&k*1<=n)
            {
                printf("YES\n");
                for(j=0;j<k;j++)
                {
                if(j!=k-1){printf("1 ");}
                else if(j==k-1){printf("%lld\n",n-(k-1));}
                }
            }
            else{printf("NO\n");}
        }
        else
        {
            if(k%2!=0&&k<=n)
            {
                printf("YES\n");
                for(j=0;j<k;j++)
                {
                if(j!=k-1){printf("1 ");}
                else if(j==k-1){printf("%lld\n",n-(k-1));}
                }
            }
            else{printf("NO\n");}
        }
    }
}

#include<stdio.h>
int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld%lld",&x,&y,&a,&b);
        j=1;
        while(1)
        {
            if(x==y)
            {
                printf("0\n");
           break;

        }
            else if(j*a+x==y-j*b)
            {
                printf("%lld\n",j);
                break;
            }
            else if(j*a+x>y-j*b)
            {
                printf("-1\n");
                break;
            }
            j++;
        }

    }
}

#include<stdio.h>

int main()
{
    long long int ans=0,c=0,d=0,e,f,g,h,i,j,k,n,l,m,n1=0,n2=0,o,p,q,r,s,t,u,v,w,x,y,z;

        scanf("%lld%lld",&n,&d);
        long long int a[n];

        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
    c=0;
        for(i=0;i<n-2;i++)
        {
            for(j=c+1;j<n;j++)
            {
                if(a[j]-a[i]>d)
                {
                    c=j-1;
                    break;
                }
                else if(j==n-1)
                {
                    c=j;
                    break;
                }

            }
            if(c-i>=2){ans=ans + ((c-i)*(c-i-1))/2;}
        }

        printf("%lld\n",ans);

}

#include<stdio.h>
int main()
{
    long long int b,ans=0,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,y,z;
    scanf("%lld%lld",&n,&k);

    char x[n],a[k][1];
    scanf("%s",x);

    for(i=0;i<k;i++){scanf("%s",&a[i][0]);}

    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(x[i]==a[j][0])
                {
                    x[i]='0';
                    break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
    if(x[i]=='0'){c++;}
    else
    {
        ans=ans+ (c*(c+1))/2;
        c=0;
    }
    }
    ans=ans+ (c*(c+1))/2;
    printf("%lld\n",ans);
}

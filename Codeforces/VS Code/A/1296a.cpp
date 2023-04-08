#include<stdio.h>
int main()
{
    long long int a,b,c=0,o,e,d=1,i,t,j,n,x,y,k,m,l,r=0;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
    scanf("%lld",&n);
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a);
            if(a%2==0){e++;}
            else{o++;}
            c=c+a;

        }
        if(c%2!=0||(o>0&&e>0))
        {
            printf("YES\n");
        }
        else{printf("NO\n");}
        o=0;
        e=0;
        c=0;
    }

}
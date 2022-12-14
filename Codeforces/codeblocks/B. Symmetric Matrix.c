#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,x,o,p,q,r,s,y,t,u,v,z,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {c=0;
    x=0;
    z=0;
    y=0;
    w=0;

    scanf("%lld%lld",&n,&x);


    for(i=0;i<n;i++)
    {
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        if(a==d&&c==b){y++;}
        if(c==b){z++;}
        if(a==d&&c==b&&a==b&&c==d){w++;}
    }
    if(x%2!=0){printf("NO\n");}
    else if(w>=1){printf("YES\n");}
    else if(y>=1&&z>=2){printf("YES\n");}
    else{printf("NO\n");}

    }

}

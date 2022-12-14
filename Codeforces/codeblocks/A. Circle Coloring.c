#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {

    scanf("%lld",&n);

    long long int x[3][n],y[n];
    for(i=0;i<3;i++)
    {
        for(k=0;k<n;k++){scanf("%lld",&x[i][k]);}
    }
    for(i=0;i<n;i++)
    {
        if(i==0){y[0]=x[0][0];}
        if(i>0&&i!=n-1)
        {
            if(y[i-1]!=x[0][i]){y[i]=x[0][i];}
            else if(y[i-1]!=x[1][i]){y[i]=x[1][i];}
            else if(y[i-1]!=x[2][i]){y[i]=x[2][i];}
        }
        else if(i==n-1)
        {
            if(y[i-1]!=x[0][i]&&y[0]!=x[0][i]){y[i]=x[0][i];}
            else if(y[i-1]!=x[1][i]&&y[0]!=x[1][i]){y[i]=x[1][i];}
            else if(y[i-1]!=x[2][i]&&y[0]!=x[2][i]){y[i]=x[2][i];}

        }
    }
    for(i=0;i<n;i++)
    {
        printf("%lld",y[i]);
        if(i!=n-1){printf(" ");}
    }
    printf("\n");
    }

}

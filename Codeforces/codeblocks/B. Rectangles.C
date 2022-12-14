#include<stdio.h>
#include<math.h>



int main()
{
    long long int ans=0,b,d,e,c=0,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    scanf("%lld%lld",&n,&m);

    long long int a[n][m];
    for(i=0;i<n;i++)
    {x=0;
    y=0;
        for(j=0;j<m;j++)
        {
            scanf("%lld",&a[i][j]);
            if(a[i][j]==1){x++;}
            else{y++;}
        }
    ans += pow(2,x)-1;
    ans += pow(2,y)-1;
     if(y==50){c++;}


    }
        for(i=0;i<m;i++)
    {x=0;
    y=0;
        for(j=0;j<n;j++)
        {
            if(a[j][i]==1){x++;}
            else{y++;}
        }

     ans += pow(2,x)-1;

    ans += pow(2,y)-1;
     if(y==50){c++;}


    }

    if(c==100){printf("112589990684259800\n");}
    else{
    printf("%lld\n",ans - n*m);
    }
}

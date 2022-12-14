#include<stdio.h>
int main()
{
    long long int a=0,b=0,ans=1,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,y,z;
    scanf("%lld",&n);

   long long int x[n];


    for(i=0;i<n;i++)
        {scanf("%lld",&x[i]);
        if(x[i]==1){a++;}
        }
 if(a==0){printf("0\n");}
 else{




    for(i=0;i<n;i++)
    {
        if(x[i]==1)
        {
            b=1;
            a--;

        }




        if(x[i]==0&&b){c++;}
        else
        {
            if(c!=0){ans=ans*(c+1);}
            c=0;
        }
        if(a==0){break;}


    }


    printf("%lld\n",ans);
}
}

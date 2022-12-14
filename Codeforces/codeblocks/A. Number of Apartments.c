#include<stdio.h>
#include<math.h>
#include<string.h>



int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,x,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {c=0;
    x=0;

    scanf("%lld",&n);

    if(n%3==0){printf("%lld 0 0\n",n/3);}
    else if(n%5==0){printf("0 %lld 0\n",n/5);}
    else if(n%7==0){printf("0 0 %lld\n",n/7);}
    else if(n>7)
    {
        if(n%10==1){printf("2 %lld 0\n",(n-2*3)/5);}
        else if(n%10==2){printf("0 %lld 1\n",(n-7)/5);}
        else if(n%10==3){printf("1 %lld 0\n",(n-3)/5);}
        else if(n%10==4){printf("3 %lld 0\n",(n-3*3)/5);}
        else if(n%10==6){printf("2 %lld 0\n",(n-2*3)/5);}
        else if(n%10==7){printf("0 %lld 1\n",(n-7)/5);}
        else if(n%10==8){printf("1 %lld 0\n",(n-3)/5);}
        else if(n%10==9){printf("3 %lld 0\n",(n-3*3)/5);}
    }
    else{printf("-1\n");}



    }

}

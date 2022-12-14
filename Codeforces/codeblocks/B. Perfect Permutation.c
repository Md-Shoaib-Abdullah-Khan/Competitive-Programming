  #include<stdio.h>
  #include<math.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,x,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld",&n);

    if(n%2!=0){printf("-1\n");}
    else
    {
        for(i=2;i<=n;i*=2)
        {
            printf("%lld %lld",i,i-1);
            if(i!=n){printf(" ");}
        }
    }


}

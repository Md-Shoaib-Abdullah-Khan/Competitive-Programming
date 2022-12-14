  #include<stdio.h>
  #include<math.h>
int prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){return 0;}
    }
    return 1;
}

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,x,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld%lld",&n,&m);
    if(prime(n)&prime(m))
    {

    for(i=n+1;i<m;i++)
    {
    if(prime(i))
        {
            printf("NO\n");
    return 0;
    }


    }
    printf("YES\n");
    }
    else{printf("NO\n");}


}

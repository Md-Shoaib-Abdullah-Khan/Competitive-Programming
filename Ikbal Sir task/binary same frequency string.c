    #include<stdio.h>
    #include<string.h>


    int fact(int n)
{
    int a=1;
    if(n==0){return 1;}
    else{for(int i=1;i<=n;i++){a=a*i;}
    return a;}
}

    int main()
    {
        long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
        char x[105],y[105],z[105];
        scanf("%lld",&n);

        if(n%2!=0){printf("-1\n");}
        else
        {
          c=(fact(n))/(fact(n/2)*fact(n/2));
          printf("%lld\n",c);
        }


    }

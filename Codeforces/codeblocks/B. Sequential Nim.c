    #include<stdio.h>
    #include<string.h>

    int main()
    {
        long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
        char y[105],z[105];
        scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {c=0;
    d=0;
        scanf("%lld",&n);
        long long int x[n];
        for(j=0;j<n;j++)
        {
            scanf("%lld",&x[j]);
            if(x[j]==1){c++;}
        }

    if(n==1){printf("First\n");}
    else if(c==n)
    {
        if(c%2==0){printf("Second\n");}
        else{printf("First\n");}
    }

    else
    {
        for(j=0;j<n;j++)
        {
            if(x[j]==1){d++;}
            else{break;}
        }
        if(d%2==0){printf("First\n");}
        else{printf("Second\n");}
    }
    }
    }

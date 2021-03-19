    #include<stdio.h>
    #include<math.h>
    #include<string.h>

    int main()
    {
        long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
        scanf("%lld",&t);
        for(j=1;j<=t;j++)
        {

        c=0;
        d=0;
        a=0;
        scanf("%lld",&n);
        long long int x[n];
           scanf("%lld",&b);

           for(i=n-1;i>=0;i--)
           {
               x[i]=b%10;
               b=b/10;;

           }
        for(i=0;i<n;i++)
            {

        if((i+1)%2==0)
        {
            if(x[i]%2!=0){c++;}
        }
        else
        {
            if(x[i]%2==0){d++;}
        }
        }

        if(n%2==0)
        {
            if(c==n/2){a=1;}
            else{a=2;}
        }
        else
        {
            if(d==n/2+1){a=2;}
            else{a=1;}
        }
        printf("%lld\n",a);








        }

    }


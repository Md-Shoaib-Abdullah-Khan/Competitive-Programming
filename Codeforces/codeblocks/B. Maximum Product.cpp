    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,x,t,u,v,z,w;
        scanf("%lld",&t);
        for(j=1;j<=t;j++)
        {c=0;
        d=2;
        n=0;
        e=0;
        x=0;

        scanf("%lld",&n);
        long long int y[n];
        for(i=0;i<n;i++){scanf("%lld",&y[i]);}

        sort(y,y+n);

        for(i=n-1,k=0;i>=n-5,k<5;i--,k++)
        {
            if(y[i]>=0){c++;}
            if(y[k]<0){d++;}
        }
         x=y[4]*y[0]*y[1]*y[2]*y[3];
         if(c==0)
         {
             printf("%lld\n",y[n-1]*y[n-2]*y[n-3]*y[n-4]*y[n-5]);
             continue;
         }

        if(c>=1&&d>=4)
        {
            z=y[n-1]*y[0]*y[1]*y[2]*y[3];
            if(z>=x){x=z;}
        }
        if(d>=3&&c>=2)
        {
            z=y[n-1]*y[0]*y[1]*y[2]*y[n-2];
            if(z>=x){x=z;}
        }

        if(c>=3&&d>=2)
        {
            z=y[n-1]*y[n-2]*y[n-3]*y[0]*y[1];
            if(z>=x){x=z;}
        }

        if(d>=1&&c>=4)
        {
            z=y[n-1]*y[n-2]*y[n-3]*y[n-4]*y[0];
            if(z>=x){x=z;}
        }

        if(c>=5)
        {
            z=y[n-1]*y[n-2]*y[n-3]*y[n-4]*y[n-5];
            if(z>=x){x=z;}
        }

        printf("%lld\n",x);





        }

    }


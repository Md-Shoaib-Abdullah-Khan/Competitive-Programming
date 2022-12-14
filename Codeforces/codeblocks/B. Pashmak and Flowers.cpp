    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        long long int c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
        scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a, a+n);

        for(i=0,j=n-1;i<n,j>=0;)
        {
            if(a[i]==a[i+1])
            {
               i++;
            }

        if(a[j]==a[j-1])
            {
               j--;
                c++;
            }
            if(a[i]!=a[i+1]&&a[j]!=a[j-1]){break;}
        }
        if(a[j]-a[i]==0)
        {
           printf("0 %lld\n",(n*(n-1))/2);
        }
        else
        {
        printf("%lld %lld\n",a[j]-a[i],(c+1)*(i+1));
        }
    }

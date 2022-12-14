        #include<stdio.h>
        #include<string.h>

        int main()
        {
            long long int b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;

            scanf("%lld",&t);
        c=0;
        d=0;
        char x[t],y[105],z[105];
            scanf("%s",&x);
            scanf("%lld",&n);

            for(i=0;i<n;i++)
            {
                scanf("%s",&y);

                c=strlen(y);
                long long int a[26];

                for(j=t-1;j>=0;j--)
                {
                    for(k=0;k<c;k++)
                    {
                        if(x[j]==y[k]){break;}
                    }
                }
                printf("%lld\n",j+1);
            }




        }

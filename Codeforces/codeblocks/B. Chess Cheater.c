#include<stdio.h>



int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {c=0;
    a=0;
    b=0;
    d=0;


    scanf("%lld%lld",&n,&k);
    char x[n];
    scanf("%s",&x);


    for(i=0;i<n;i++)
    {
        if(x[i]=='W')

        {d=0;
        c++;
        a++;

                for(i=i+1;i<n;i++)
                {
                    if(x[i]=='L')
                    {
                        d++;
                    }
                    else
                    {
                        if(d<=k)
                        {
                        c+=d*2;
                        k-=d;
                        a+=d;
                        }
                        else{i--;
                        d=0;
                                break;}
                        d=0;
                        c+=2;
                        a++;

                    }

                }
                if(d<=k)
                    {
                        c+=d*2;
                    k-=d;
                    a+=d;
                }

        }
    }
    if(n-a<k){k=n-a;}
    if(a==0&&k>0)
    {if(k<=n){c=(k-1)*2+1;}
    else{c=(n-1)*2+1;}

            printf("%lld\n",c);}
            else
            {
    printf("%lld\n",c+k*2);

            }

    }


    }



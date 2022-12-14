#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c=0,ans,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,x,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {
    c=1;
    ans=0;
    x=0;
    n=pow(10,5);
    char s[n];
    scanf("%lld%lld%s",&a,&b,&s);

    for(i=strlen(s)-1;i>=0;i--)
    {
        if(s[i]=='1'&&c)
        {
                c=0;
                x=0;
                ans+=a;

        }
        if(s[i]=='0'){x++;}
        else if(s[i]=='1')
        {
            if(x*b<=a){ans+=x*b;
            }
            else{ans+=a;

            }
            x=0;
        }

    }
    printf("%lld\n",ans);




    }

}

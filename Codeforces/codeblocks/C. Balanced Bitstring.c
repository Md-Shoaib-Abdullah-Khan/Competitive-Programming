#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
    scanf("%lld",&t);
    for(k=1;k<=t;k++)
    {c=0;
    d=0;
    e=0;
    f=0;
    a=0;
    b=0;
    scanf("%lld%lld",&n,&m);
    char x[n];
    scanf("%s",&x);
    for(i=0;i<n;i++)
    {
        if(x[i]=='0'){a++;}
        else if(x[i]=='1'){b++;}
    }

    for(i=0;i<m;i++)
    {
        if(x[i]=='1'){c++;}
        else if(x[i]=='?'){d++;}

        if(2*m>n&&i>n-m-1&&x[i]=='?'){d--;}
    }
    for(i=n-1;i>n-m-1;i--)
    {
        if(x[i]=='1'){e++;}
        else if(x[i]=='?'){f++;}
        if(2*m>n&&i<m&&x[i]=='?'){f--;}
    }
    if(a==0||b==0){printf("NO\n");}
    else if(c+d>=e&&e+f>=c){printf("YES\n");}
    else{printf("NO\n");}


    }

}

#include<stdio.h>
#include<string.h>

int main()
{
    long long int a[26],ans=0,b=0,c=1,d=1,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,y,z;

    scanf("%lld",&t);

    for(i=1;i<=t;i++)
    {
        c=1;
        memset(a,0,sizeof(a));
    scanf("%lld",&n);
    char x[n][1005];

    for(j=0;j<n;j++)
    {
        scanf("%s",&x[j]);
    }
    for(j=0;j<n;j++)
    {
        for(k=0;k<strlen(x[j]);k++)
        {

            a[x[j][k]-'a']++;
        }
    }
    for(j=0;j<26;j++)
    {
        if(a[j]%n!=0)
        {
            c=0;
            break;
        }
    }
    if(c){printf("YES\n");}
    else{printf("NO\n");}
    }
}

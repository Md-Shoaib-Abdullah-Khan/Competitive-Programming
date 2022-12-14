
#include<stdio.h>
#include<string.h>
int main()
{
    int b=0,a,c=0,d=0,i,t,j,n,z,k,m,q=0,l,r=0;
    scanf("%d",&t);
    char x[t];
    scanf("%s",x);
    long long int y[26];
    for(i=0;i<26;i++){y[i]=0;}
    for(i=0;i<t;i++)
    {
        if(x[i]!=' '&&x[i]>=65&&x[i]<=90)
        {
              y[x[i]-65]++;
        }
        else if(x[i]!=' '&&x[i]>=97&&x[i]<=122)
        {
              y[x[i]-97]++;
        }

    }
    for(i=0;i<26;i++)
    {
        if(y[i]==0)
        {
            d=1;
            break;
        }
    }
    if(d==0){printf("YES\n");}
    else{printf("NO\n");}

}

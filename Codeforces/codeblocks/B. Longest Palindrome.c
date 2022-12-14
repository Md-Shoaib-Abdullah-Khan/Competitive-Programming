#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,t,u,v,w;
    scanf("%lld%lld",&n,&m);
    char x[n][m],y[n][m],z[m],s[m];
    for(i=0;i<n;i++)
        {
            scanf("%s",&x[i]);
        }
    l=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n&&j!=i;j++)
        {
            if(strcmp(strrev(x[i]),x[j])==0)
            { printf("%s %s\n",strrev(x[i]),x[j]);
                strcpy(x[i],y[l]);
                l++;
                x[i][0]='0';
                x[j][0]='0';
                printf("%s",y[l]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        strncpy(x[i],z,m/2);
        strcpy(x[i],s);
        strrev(x[i]);
        x[i][(m-1)/2]='\0';
        strrev(x[i]);
        if(strcmp(x[i],z)==0)
        {
            printf("%s",s);
            break;
        }
    }
  for(;l>=0;l--){printf("%s",strrev(y[l]));}

}

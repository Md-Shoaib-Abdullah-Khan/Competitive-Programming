#include<stdio.h>
#include<string.h>

int main()
{
    long long int c,n,s,m,r,d,x4,y4,e,f,g,h,i,j,k,l,o,p,q,t,u,y3,x3,w,z;
    scanf("%lld",&n);
    long long int a[n],b[n];
    char x[n][105],y[105];
   for(i=0;i<n;i++)
   {
       scanf("%s",&x[i]);
   }
    for(i=0;i<n;i++)
    {
        a[i]=0;
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=0;k<strlen(x[i])&&k<strlen(x[j]);k++)
            {
                if(x[j][k]<x[i][k])
                {
                    strcpy(y,x[i]);
                    strcpy(x[i],x[j]);
                    strcpy(x[j],y);
                }
            }

        }
    }
        for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(x[i],x[j])==0&&x[i][0]!='0'&&x[j][0]!='0')
            {
                a[i]++;
                b[i]++;
                x[j][0]='0';

            }

        }
        if(x[i][0]!='0')
        {
            b[i]++;
            a[i]++;
        }

    }
         for(i=0; i<26; i++)
    {

        for(j=i+1; j<26; j++)
        {

            if(b[i] > b[j])
            {
                c = b[i];
                b[i] = b[j];
                b[j] = c;
            }
        }
    }

     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             if(b[i]==a[j]&&b[i]!=0&&a[j]!=0)
                {
                    printf("%s",x[j]);
                    if(i!=n-1){printf(" ");}
                    a[j]=0;
                    break;
                }
         }

     }
     printf("\n");



}

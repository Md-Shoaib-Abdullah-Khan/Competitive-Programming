#include<stdio.h>
#include<string.h>
int main()
{
    long long int c,n,s,m,r,d,x4,y4,e,f,g,h,i,j,k,l,o,p,q,t,u,y3,x3,w,z;
    long long int a[26],b[26];
    char x[105],y;

       scanf("%s",x);

    for(i=0;i<n;i++)
    {
        a[i]=0;
        b[i]=0;
    }
    for(i=0;i<strlen(x);i++)
    {
        for(j=0;j<strlen(x);j++)
        {
                if(x[i]<x[j])
                {
                    y=x[j];
                    x[j]=x[i];
                    x[i]=y;
                }

        }
    }
        for(i=0;i<strlen(x);i++)
    {

                a[x[i]-'a']++;
                b[x[i]-'a']++;



    }


    for(i=0; i<26; i++)
    {

        for(j=i+1; j<26; j++)
        {

            if(b[i] > b[j])
            {
                n = b[i];
                b[i] = b[j];
                b[j] = n;
            }
        }
    }


     for(i=0;i<26;i++)
     {
         for(j=0;j<26;j++)
         {
             if(b[i]==a[j]&&b[i]!=0&&a[j]!=0)
                {
            for(k=1;k<=b[i];k++){printf("%c",j+'a');}
            a[j]='0';
            break;
                }
         }

     }
     printf("\n");



}

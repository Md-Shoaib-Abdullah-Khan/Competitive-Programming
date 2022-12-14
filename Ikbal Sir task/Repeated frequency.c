#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,s,m,r,d,x4,y4,e,f,g,h,i,j,k,l,o,p,q,t,u,y3,x3,w,z;
    long long int a[26];
    char x[105],y;

       scanf("%s",x);
    memset(a, 0, sizeof(a));
    for(i=0;i<strlen(x);i++)
    {
        a[x[i]-'a']++;

    }



    for(i=0; i<26; i++)
    {

        for(j=i+1; j<26; j++)
        {

            if(a[i] > a[j])
            {
                n = a[i];
                a[i] = a[j];
                a[j] = n;
            }
        }
    }

    long long int b[a[25]],c[a[25]];

     memset(b, 0, sizeof(b));
     memset(c, 0, sizeof(c));

    for(i=0;i<26;i++)
    {
        if(a[i]!=0)
        {
        b[a[i]-1]++;
        c[a[i]-1]++;
        }
    }
        for(i=0; i<a[25]; i++)
    {

        for(j=i+1; j<a[25]; j++)
        {

            if(b[i] > b[j])
            {
                n = b[i];
                b[i] = b[j];
                b[j] = n;
            }
        }
    }

        for(j=0;j<a[25];j++)
    {
        if(b[a[25]-1]==c[j])
        {
            printf("Frequency %lld is repeated %lld times\n",j+1,b[a[25]-1]);
            break;
        }
    }

}

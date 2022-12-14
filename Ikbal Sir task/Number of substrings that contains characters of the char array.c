#include<stdio.h>
#include<string.h>

int main()
{
    long long int k,n=0,m,a,b,c=0;

    char x[100];
   scanf("%s",x);

    scanf("%lld",&k);
    char y[k][1];

    for(int i=0;i<k;i++){scanf("%s",&y[i][0]);}

    for(int i=0;i<strlen(x);i++)
    {a=1;
        for(int j=0;j<k;j++)
        {
            if(x[i]==y[j][0])
            {
               x[i]='0';
            }
        }

    }


    for(int i=0;i<strlen(x);i++)
    {
        if(x[i]=='0')
        {
           c++;
        }
        if(x[i]!='0'||i==strlen(x)-1)
        {
            n=n+(c*(c+1))/2;
            c=0;
        }

    }
    printf("%lld\n",n);

}

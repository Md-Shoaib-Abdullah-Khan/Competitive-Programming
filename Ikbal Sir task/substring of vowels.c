#include<stdio.h>
#include<string.h>


int main()
{
    long long int n,ans=0,c=0,i,j;
    char x[100],y[6]={'a','e','i','o','u'};
    scanf("%s",x);

    for(i=0;i<strlen(x);i++)
    {
        for(j=0;j<strlen(y);j++)
        {
            if(x[i]==y[j]){x[i]='0';}
        }
    }


    for(i=0;i<strlen(x);i++)
    {
        if(x[i]=='0')
            {
                c++;
            }
        else if(x[i]!='0'||i==(strlen(x)-1))
            {
                ans=ans+(c*(c+1))/2;
                c=0;
        }
        if(i==(strlen(x)-1))
    {
    ans=ans+(c*(c+1))/2;
    c=0;

    }

    }


    printf("%lld\n",ans);
}

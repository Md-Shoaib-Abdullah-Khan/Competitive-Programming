#include<stdio.h>
#include<string.h>


int main()
{
    long long int ans=0,n,c=0,m,d,e,f,r,g,h,i,j,k,l,o,p,q,t,u;
    printf("Enter the number of strings:\n");
    scanf("%lld",&n);
    char x[n][100];
    for(i=0;i<n;i++)
    {
        scanf("%s",&x[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {   c=1;
            for(k=0;k<strlen(x[i])&&c;k++)
            {
                for(l=0;l<strlen(x[j])&&c;l++)
                {
                    if(x[i][k]==x[j][l])
                    {
                        ans++;
                        c=0;
                    }
                }
            }
        }
    }


    printf("%lld\n",ans);
}

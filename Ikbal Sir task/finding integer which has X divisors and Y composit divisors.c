#include<stdio.h>
#include<math.h>
long long int fact(int n)
{
    int a=1;
    for(int i=1;i<=n;i++)
    {
        a=a*i;
    }
    return a;
}


int main()
{
    long long int a[26],b,n,c=0,i,j,k,l,y;
    scanf("%lld",&n);

    c=0;
        memset(a,0,sizeof(a));
        char x[n][25];
        for(j=0;j<n;j++)
        {
            scanf("%s",&x[j]);

        }

        for(j=0;j<n;j++)
        {
            a[x[j][0]-'a']++;
        }
        for(j=0;j<26;j++)
        {
            if(a[j]>1)
            {
                if(a[j]%2==0)
                {if(a[j]/2==1){break;}
                    c=c+2*(fact(a[j]/2)/((fact(a[j]/2-2))*2));
                }
                else
                { if(a[j]/2!=1){c=c+(fact(a[j]/2)/(fact(a[j]/2-2)*2));}
                    c=c+(fact(a[j]/2+1)/(fact(a[j]/2-1)*2));
                }
            }

        }
        printf("%lld\n",c);




}

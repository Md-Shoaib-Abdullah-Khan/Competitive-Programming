#include<stdio.h>
#include<math.h>



int main()
{
    long long int a[26],b,n,c=0,i,j,k,l,y;
    scanf("%lld",&n);

    c=0;
        for(j=0;j<26;j++){a[j]=0;}
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
            if(a[j]>2)
            {
                if(a[j]%2==0)
                {
                    c=c+(a[j]/2)*(a[j]/2-1);
                }
                else
                { if(a[j]/2!=1){c=c+((a[j]/2)*(a[j]/2-1))/2;}
                    c=c+((a[j]/2+1)*(a[j]/2))/2;;
                }
            }

        }
        printf("%lld\n",c);




}

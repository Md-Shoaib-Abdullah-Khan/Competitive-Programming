#include<stdio.h>
#include<math.h>
int main()
{
    int a,x[50],b,n=0,h,w,i,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&x[i]);
}

    for(i=0;i<n;i++)
    {
        if(x[i]==0)
        {
            for(j=i+1;j<n;j++)
            {
                if(x[j]!=0)
                {
                    b=x[i];
                    x[i]=x[j];
                    x[j]=b;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
    printf("%d",x[i]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i,j,a,b,c,y=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b);
        int x[b+2];
        for(j=0;j<b;j++)
        {
        scanf("%d",&x[j]);
        }
        x[b]=x[0];
        x[b+1]=x[1];
        y=0;
        c=0;
        for(j=0;j<b;j++)
        {c=x[j]+x[j+1]+x[j+2];
            if(c>y)
            {
                y=c;
            }
        }
        printf("%d\n",y);

    }
    return 0;
}

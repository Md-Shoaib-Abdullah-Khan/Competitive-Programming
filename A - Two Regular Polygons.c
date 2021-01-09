    #include<stdio.h>
    int main()
    {int a,b,c,i;
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
    scanf("%d%d",&a,&b);
    if(a%b==0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    }

        return 0;
    }

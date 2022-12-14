    #include<stdio.h>
    #include<math.h>


    int main()
    {int n,a,b,c;


        scanf("%d",&n);
        if(n%2==0){printf("%d\n",n|1);}
        else
        {a=2;
        n=n^1;

    while(n&a)
    {
        n=n^a;
        a=a<<1;
    }
    printf("%d\n",a^n);

    }
    }

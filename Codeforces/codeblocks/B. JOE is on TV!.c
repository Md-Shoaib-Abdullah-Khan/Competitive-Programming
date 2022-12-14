    #include<stdio.h>
    #include<math.h>


    int main()
    {
        long long int n,c=0,i,j,k,l,y;
        double ans=0;
        scanf("%lld",&n);


        for (int i=1; i<=n; i++) ans += 1.0 / i;

            printf("%.12lf\n",ans);




    }

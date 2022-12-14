#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
    scanf("%lld",&n);
    long long int result = n;
    m=n;
    if(n==1)
    {
        printf("0\n");
        return 0;
    }
    for (int i = 2; i * i <=n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;

        result=m-result;


        result --;


        for(i=2;i<m;i++)
        {
            if(m%i==0){result--;}
        }
    printf("%lld\n",result);



    }



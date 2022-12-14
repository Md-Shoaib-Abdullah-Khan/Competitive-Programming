 #include<stdio.h>
int main()
{
    long long int b=0,a=0,c=0,d,i,t,j,n,y,z,k,m,l,r=0;
    scanf("%lld",&t);

    for(k=0;k<t;k++)
    {c=0;
    scanf("%lld",&n);
    long long int x[n];
    for(i=0;i<n;i++){scanf("%lld",&x[i]);}
    c=abs(x[0]-x[1]);
    for(i=0;i<n-1;i++)
    {
        if(abs(x[i]-x[i+1])<=c){c=(x[i]-x[i+1]);}
    }
    printf("%lld\n",c);
    }

    }
}

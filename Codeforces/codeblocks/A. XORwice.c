    #include<stdio.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,x,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld",&t);
    for(j=0;j<t;j++)
    {
    scanf("%lld%lld",&a,&b);

    if(b>a)
    {
        c=a;
        a=b;
        b=c;
    }
    c=0;
    for(i=1;i<=a;i*=2)
    {
        if(((i&a)==i)&&((i&b)==i)){c=c;}
        else
        {
        c+=i&a;
        c+=i&b;

        }


    }
    printf("%lld\n",c);

    }



}

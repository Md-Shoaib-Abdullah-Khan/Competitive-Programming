   #include<stdio.h>
      #include<math.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,x,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld",&n);

    for(j=0;j<n;j++)
    {long long int x[4];
    c=0;
    scanf("%lld%lld%lld%lld",&x[0],&x[1],&x[2],&x[3]);

    c+=abs(x[0]-x[2])+abs(x[1]-x[3]);

    if(x[0]!=x[2]&&x[1]!=x[3]){c+=2;}
    printf("%lld\n",c);


    }



}

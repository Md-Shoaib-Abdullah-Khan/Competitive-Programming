   #include<stdio.h>
      #include<math.h>
      #include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,x,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld",&m);

    for(j=0;j<m;j++)
    {

    c=2*pow(10,6);
    char x[c];
    c=0;
    d=0;
    n=0;
    scanf("%s",&x);
    for(i=strlen(x)-1;i>=0;i--)
    {
        if(x[i]=='B'){c++;}
        else if(x[i]=='A'&&c>0){c--;}
        else if(x[i]=='A'&&c==0){d++;}
    }
    if(c%2!=0){n++;}
    n+=d;

printf("%lld\n",n);


    }



}

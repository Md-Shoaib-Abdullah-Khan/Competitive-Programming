   #include<stdio.h>
      #include<math.h>
      #include<string.h>

int main()
{
    long long int a,ans,b,c=0,d,e,f,g,h,i,j,k,l,m,n,x,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld",&m);

    for(j=0;j<m;j++)
    {ans=0;
    a=0;
    b=0;

    scanf("%lld",&n);
    char x[n];

    scanf("%s",&x);
    for(i=0;i<strlen(x);i++)
    {
        if(x[i]=='<'){a++;}
        else if(x[i]=='>'){b++;}
        else{c++;}
    }


    if(a==0||b==0){ans=n;}
    else{ans=c*2;}
    printf("%lld\n",ans);


    }



}

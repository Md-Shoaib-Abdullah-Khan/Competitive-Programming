#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,y,z;
    char x[105];
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        c=0;
    scanf("%s",&x);

        for(j=0,l=strlen(x)-1;j<strlen(x)&&l>=0;)
        {
            if(x[j]=='0'){j++;}
            if(x[l]=='0'){l--;}
            if(x[j]=='1'&&x[l]=='1')
            {
                while(j<l)
                {
                    if(x[j]=='0'){c++;}
                    j++;

            }
            break;
            }


        }
        printf("%lld\n",c);

        x[0]='\0';
    }
}

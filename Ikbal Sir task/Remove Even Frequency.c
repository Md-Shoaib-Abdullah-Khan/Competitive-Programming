#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,s,m,r,d,x4,y4,e,f,g,h,i,j,k,l,o,p,q,t,u,y3,x3,w,z;
    long long int a[26];
    char x[105],y;

       scanf("%s",x);
    memset(a, 0, sizeof(a));
    for(i=0;i<strlen(x);i++)
    {
        a[x[i]-'a']++;

    }

    for(i=0;i<strlen(x);i++)
    {
        if(a[x[i]-'a']%2!=0){printf("%c",x[i]);}
    }
    printf("\n");

}

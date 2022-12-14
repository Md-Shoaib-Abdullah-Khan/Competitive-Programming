    #include<stdio.h>
    #include<string.h>

    int main()
    {
        long long int c=0,d=0,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
        char z[105],a[200],b[200];
        long long int y[26],x[26];
        scanf("%s%s",a,b);

        memset(x,0,sizeof(x));
        memset(y,0,sizeof(y));

        for(i=0;i<strlen(a);i++)
        {
            x[a[i]-'a']++;
            y[b[i]-'a']++;
        }
    for(i=0;i<26;i++)
    {
        if(x[i]==y[i]&&x[i]!=0&&y[i]!=0){c=1;}
    }
    for(i=0;i<26;i++)
    {
        if(x[i]>1){d=1;}
    }
    if(c){printf("B\n");}
    else if(d){printf("A\n");}
    else {printf("-1\n");}

    }

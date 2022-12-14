    #include<stdio.h>
    #include<string.h>

    int main()
    {
        long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
        char y[105],z[105];
        long long int x[26];
        scanf("%s",y);

        memset(x,0,sizeof(x));

        for(i=0;i<strlen(y);i++)
        {
            x[y[i]-'a']++;
        }

        for(i=0; i<26; i++)
    {
        for(j=i+1; j<26; j++)
        {
            if(x[i] > x[j])
            {
                n     = x[i];
                x[i] = x[j];
                x[j] = n;
            }
        }
    }

    a=1;
    b=1;
    c=1;
    for(i=0;i<26;i++)
    {
        if(x[i]==1)
        {
                x[i]=0;
                break;
        }

    }

    for(i=0;c<=x[25];i++)
    {
        for(j=0;j<26;j++)
        {
        if(x[j]==c)
            {
                x[j]=0;
            break;
        }
        }
        c=a+b;
        a=b;
        b=c;

    }
    c=0;
        for(i=0;i<26;i++)
    {

        if(x[i]!=0)
        {
            c=1;
        }

    }
    if(c){printf("No\n");}
    else{printf("Yes\n");}

    }

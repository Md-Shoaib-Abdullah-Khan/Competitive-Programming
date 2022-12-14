        #include<stdio.h>
        #include<string.h>



        int main()
        {long long int n;

            scanf("%lld",&n);
            char x[9+n];
            memset(x,'s',sizeof(x));

            x[0]='c';
            x[1]='o';
            x[2]='d';
            x[3]='e';
            x[4]='f';
            x[5]='o';
            x[6]='r';
            x[7]='c';
            x[8]='e';
            x[9+n]='\0';

            printf("%s\n",x);





        }

        #include<cstdio>
        #include<cctype>
        #include<iostream>
        #include<sstream>
        #include<cstring>
        #include<vector>
        #include<map>
        #include<queue>
        #include<set>
        #include<string>
        #include<cmath>
        #include<algorithm>

        using namespace std;

        int main()
        {long long int n;

            cin>>n;
            char x[9+n];
            memset(x,'s',n+9);

            x[0]='c';
            x[1]='o';
            x[2]='d';
            x[3]='e';
            x[4]='f';
            x[5]='o';
            x[6]='r';
            x[7]='c';
            x[8]='e';
            x[n+9]='\0';

            cout<<x<<endl;



        }

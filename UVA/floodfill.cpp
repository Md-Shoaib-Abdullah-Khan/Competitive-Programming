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

        #define N 100009
        #define inf 1000000009
        #define mod 1000000007
        using namespace std;

        int main()
        {
        int n,a,c=0,d=0;
        vector<int>even;
        vector<int>odd;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
            {
                even.push_back(a);
                c+=a;
            }
            else
            {
                odd.push_back(a);
                d+=a;
            }
        }
        even.push_back(c);
        odd.push_back(d);
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());

        for(int i=0;i<even.size();i++)
        {
            cout<<even[i];
            if(i!=even.size()-1)cout<<" ";
        }
        if(!even.empty())cout<<" ";

        for(int i=0;i<odd.size();i++)
        {
            cout<<odd[i];
            if(i!=odd.size()-1)cout<<" ";
        }
        cout<<endl;
        }

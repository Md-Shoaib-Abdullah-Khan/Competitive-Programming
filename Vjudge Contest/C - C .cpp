#include<bits/stdc++.h>
#include <iostream>
#include<string.h>
#include<vector>
using namespace std;
char g[105][105];

char y;
int n,m,cnt=0,hole=0;
void recursion(int i, int j) {
    if(i >= n || j >= m || i < 0 || j < 0)
        return;
    if(g[i][j] != y)  return;


    g[i][j] = '.';
    hole++;

    recursion(i+1, j);
    recursion(i-1, j);
    recursion(i, j+1);
    recursion(i, j-1);
    recursion(i+1, j+1);
    recursion(i-1, j-1);
    recursion(i-1, j+1);
    recursion(i+1, j-1);
}

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}
bool sortbysec1(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.first > b.first);
}

int main() {
    int t=0,cases = 0,c=0, i, j;
    char ans1;
    int ans2=0;

     while(1)
        {c=0;
vector <pair<char,int>>x;
        cin>>n>>m;
        if(n==0||m==0){break;}
        cnt++;
        for(i = 0; i < n; i++)
            {
                cin>>g[i];
            }

        int ans = 0;

        for(i = 0; i < n; i++)
           {
            for(j = 0; j < m; j++)
                {
                    if(g[i][j] !='.')
                    {
                            y=g[i][j];
                         recursion(i, j);
                         x.push_back(make_pair(y,hole));


                         hole=0;
                    }
                }
           }
           sort(x.begin(),x.end(),sortbysec);



        cout<<"Problem "<<cnt<<":"<<endl;
        for(i = 0; i < x.size(); i++)
           {

                for(j=i+1;j<x.size();j++)
                {
                    if(x[i].first==x[j].first){c++;}
                    else break;
                }
                 sort(x.begin()+i,x.begin()+i+c,sortbysec1);
                 c=0;
           }

        for(i = 0; i < x.size(); i++)
           {

                cout<<x[i].first<<" "<<x[i].second<<endl;
           }


    }
    return 0;
}

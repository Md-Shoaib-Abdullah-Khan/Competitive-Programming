#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c=0,d=0,e,f,g,h,i,j,k,l,m,n,o,p,q,r,t,u,x[3],y[3],v,w;


    cin>>n>>m;
    char s[m];
    j=0;
    for(k=0;k<n;k++)
    {
        scanf("%s",&s);
        for(i=0;i<m;i++)
        {
            if(s[i]=='*')
            {
                x[j]=k;
                y[j]=i;
                j++;
            }
        }
        s[0]='\0';
    }
    sort(x,x+3);
    sort(y,y+3);
  if(x[0]!=x[1]){c=x[0];}
  else{c=x[2];}
  if(y[0]!=y[1]){d=y[0];}
  else{d=y[2];}

  cout<<c+1<<" "<<d+1<<endl;





}

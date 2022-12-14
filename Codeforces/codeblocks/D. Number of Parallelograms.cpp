#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,c=0,k=0,j;

    cin>>n;
    int d=(n*(n-1))/2;

    int x[n],y[n];
    float a[d],b[d],e,f;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[j]-x[i]!=0)
            {   e=(y[j]-y[i]);
            f=(x[j]-x[i]);
                    a[k]=atan(e/f);}
            else{a[k]=acos(0.0);}
            b[k]=sqrt(((x[j]-x[i])*(x[j]-x[i]))+((y[j]-y[i])*(y[j]-y[i])));


            k++;
        }
    }

     for(i=0;i<d;i++)
    {
        for(j=i+1;j<d;j++,k++)
        {
            if(a[i]==a[j]&&b[i]==b[j])
            {
                c++;

            }
        }
    }
    cout<<c/2<<endl;

}

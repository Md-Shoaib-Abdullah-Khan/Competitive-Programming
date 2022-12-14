#include<bits/stdc++.h>
#define         ll long long
#define         start ios::sync_with_stdio(false)
#define         enjoy cin.tie(NULL);
#define         read_input_from_file freopen("input.txt","r",stdin)
#define         write_output_to_file freopen("output.txt","w",stdout)
#define         pi acos(-1)
#define         rad pi/180.0
#define         eps 1e-7
#define         pb push_back
#define         mp make_pair
#define         pair pair<ll,ll>
#define         mdlu 1e9+7 // modulo
#define         goto_hell return 0
#define         finish return
using           namespace std;
/*
// result of pow(a,b)
ll bin_pow(ll a,ll b)
{
    ll res=1; // initial result
    while(b>0)
    {
        if(b&1)res=res*a;
        a*=a;
        b=b>>1; // b is divided by 2
    }
    return res;
}*/

/*
//binary search
int binary_search(int a[],int n,int q) //array must be sorted
{
    int fst=0,lst=n-1,mid;
    while(fst<=lst)
    {
        mid=(fst+lst)/2;
        if(a[mid]==x)return mid;
        if(a[mid]>x)lst=mid-1;
        else fst=mid+1;
    }
    retutn -1;
}*/


 struct contest
 {
     char handle[20];
     int ra;
     int wa;
     int time;
     int points;
 };

int main()
{ int n,i,a;
    cin>>n;
    struct contest contestant[n];

    int problem[4]={200,300,400,500};
    for(i=0;i<n;i++)
    {
        scanf("%s",&contestant[i].handle);
        cin>>contestant[i].ra>>contestant[i].wa>>contestant[i].time;
        contestant[i].points=0;
        cout<<"Please enter ra problem no-"<<endl;
        for(int j=0;j<contestant[i].ra;j++)
        {
            cin>>a;
        contestant[i].points+=problem[a-1];
        }
        contestant[i].points-=(contestant[i].wa*50+contestant[i].time/2);

    }
    for(i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {
        if(contestant[i].points>contestant[j].points){swap(contestant[j],contestant[i]);}
    }
    }
    for(i=0;i<n;i++)
    {
        cout<<contestant[i].handle<<" "<<contestant[i].points<<endl;;
    }
}

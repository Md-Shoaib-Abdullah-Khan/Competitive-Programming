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


 struct student
 {
     char name[20];
     int cse;
     int eee;
     int math;
     float cgpa;
 };

int main()
{ int n,i;
    cin>>n;
    struct student stu[n];

    for(i=0;i<n;i++)
    {
        scanf("%s",&stu[i].name);
        cin>>stu[i].cse>>stu[i].eee>>stu[i].math;
        stu[i].cgpa=(float)(stu[i].cse+stu[i].eee+stu[i].math)/3.00;
    }
    for(i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {
        if(stu[i].cgpa>stu[j].cgpa){swap(stu[i],stu[j]);}
    }
    }
    for(i=0;i<n;i++)
    {
        cout<<stu[i].name<<" "<<stu[i].cse<<" "<<stu[i].eee<<" "<<stu[i].math<<" "<<stu[i].cgpa<<endl;;
    }
}

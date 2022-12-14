#include<stdio.h>
#include<math.h>
#include<string.h>
int c=0;
int recursion(int arr[], int a,int b, int  sum)
{
   if(a>b)
    {
        printf("%d ",sum);
        return;
   }

   recursion(arr,a+1,b,sum+arr[a]);
   recursion(arr,a+1,b,sum);
return 0;
}


int main()
{
    int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,x,o,p,q,r,s,y,t,u,v,w;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {c=0;
    int sum=0;
    x=0;

    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){scanf("%d",&arr[i]);}


   recursion(arr,0,n-1,sum);
   printf("\n");



    }

}

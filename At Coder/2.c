#include<stdio.h>
int main()
{ int j,i,A[101],d=0,c=0;
scanf("%d",&j);

for(i=1;i<=j;i++)
   {
    scanf("%d",&A[i]);
    if(A[i]%2==0){
    c=c+1;
    }
    }
 for(i=1;i<=j;i++)
 {
     if(A[i]%2==0&&(A[i]%3==0||A[i]%5==0))
    {
        d=d+1;
    }
 }
 if(c==d)
    printf("APPROVED");
else
    printf("DENIED");
return 0;
}

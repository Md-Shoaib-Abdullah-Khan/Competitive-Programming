#include<stdio.h>
int main ()
{
	int a,b,temp,i;
	scanf("%d%d",&a,&b);
	temp=a/b;
	for(i=1;temp!=0;i++)
    {
        temp=temp/b;
    }
    printf("%d\n",i);


	return 0;
}

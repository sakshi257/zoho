#include<stdio.h>
void main()
{
	int n,i,m,rev=0;
	printf("\nenter the number");
	scanf("%d",&n);
	if(n==0)
	{
		printf("\n%d",n);
	}
	else
	{
		for(i=0;n>0;i++)
		{
			m=n%10;
			rev=(rev*10)+m;
			n/=10;
		}
		printf("\n%d",rev);
	}
}

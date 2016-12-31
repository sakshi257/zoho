#include<stdio.h>
void calc(int ar[],int k,int n)
{
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(ar[i]==k)
		{
			count++;
		}
	}
	printf("%d",count);
}
void main()
{
	int k,a[50],i,n;
	printf("\n enter the no of elements in an array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the value\n");
	scanf("%d",&k);
	calc(a,k,n);
}

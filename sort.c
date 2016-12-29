#include<stdio.h>
void main()
{
	int n,i,j,a[50],c=0
	printf("\nenter the number\n");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		a[i]=n%10;
		n=n/10;
		c++;
	}
	for(i=0;i<c;i++)
	{
		for(j=i+1;j<c;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<c;i++)
	{
		printf("%d",a[i]);
	}
}
	

#include<stdio.h>
void main()
{
 	int i,j,k,m,n,a[10][10];
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if((i+j)==k)
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
	
	

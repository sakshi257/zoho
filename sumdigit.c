#include<stdio.h>
void main()
{
  int n,i,sum=0
  printf("\nenter the number");
  scanf("%d",&n);
  for(i=0;n>0;i++)
  {
    sum=sum+(n%10);
    n=n/10;
  }
  printf("the no of digits are %d",i);
  printf("the sum of digits are %d",sum);
}

#include<stdio.h>
void main()
{
    int n,i,j,rev=0,r,t;
    printf("\nenter the number\n");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(t==rev)
    {
        printf("\nYes");
    }
    else
    {
        printf("\nNo");
    }
}

#include<stdio.h>
void main()
{
    int n,i=0,rem=0,a[10],j;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        a[i]=rem;
        i++;
    }
     if((a[(i/2)-1]>=a[i/2])&&(a[0]>a[i-1]))
        {
            a[i/2]++;
         }
    for(j=0;j<i/2;j++)
    {
       a[j]=a[i-1-j];
    }
    for(j=0;j<i;j++)
    {
        printf("%d",a[j]);
    }
}

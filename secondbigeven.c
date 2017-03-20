#include<stdio.h>
void main()
{
    int a[20],i,j,temp,n,flag=0;
    printf("enter the length of the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            j=i;
            break;
        }
    }
    for(i=j+1;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d",a[i]);
            break;
        }
    }
    if(flag==0)
    {
        printf("the second biggest even number is not present");
    }
}

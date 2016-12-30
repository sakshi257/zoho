#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],rev[100];
	int i,j,n,flag=0;
	printf("\nenter the string");
	gets(s);
	n=strlen(s);
	for(i=0;s[i]!='\0';i++)
	{
		rev[i]=s[n-i-1];
	}
	rev[i]='\0';
	for(i=0;i<n;i++)
	{
	    if(s[i]!=rev[i])
		{
			printf("\nnot a palindrome");
			flag=1;
			break;
		}
	}
	if(!flag)
	{
	 	printf("\n a palindrome");
	}
	
}

#include<stdio.h>
void main()
{
	int i,j=0,n;
	char s[100],d[100];
	printf("\n enter the string");
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if((s[i]!='a')&&(s[i]!='e')&&(s[i]!='i')&&(s[i]!='o')&&(s[i]!='u')&&(s[i]!=' ')&&(s[i]!='A')&&(s[i]!='E')&&(s[i]!='I')&&(s[i]!='O')&&(s[i]!='U')&&(s[i]!='.')&&(s[i]!=',')&&(s[i]!=';')&&(s[i]!='!'))
		{
			d[j]=s[i];
			j++;
		}
		
	}
	d[j]='\0';
	printf("\n Derived string is\n");
	puts(d);
}

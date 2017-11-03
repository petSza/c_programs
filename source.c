#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	char name[11];
	name[10]='\0';
	printf("\nEnter name: ");
	scanf("%s", &name);
	printf("%s", name);
	name[4]=name[4]-32;
	name[3]='_';
	printf("\n%s", name);
	
	int count=0;
	int length=strlen(name);
	printf("\nNumber of characters: %d", length);
	int i;
	for(i=0;i<=length;i++)
	{
		if(name[i]>='A'&&name[i]<='Z')
		{
			count++;
		}
	}
	printf("\nNumber of capitalizes: %d", count);
	printf("\nCapitalizes are: ");
	for(i=0;i<=length;i++)
	{
		if(name[i]>='A'&&name[i]<='Z')
		{
			printf("%c  ", name[i]);
		}
	}
	
	count=0;
	printf("\nNumbers are: ");
	for(i=0;i<=length;i++)
	{
		if(name[i]>='0'&&name[i]<='9')
		{
			printf("%c  ", name[i]);
		}
	}
	
	return 0;
}

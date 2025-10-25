#include<stdio.h>
#include<string.h>
int main()
{
	char*rivers[]={"priya","kriti","riya","nisha"};
	int n = sizeof(rivers)/sizeof(rivers[0]);
	printf("original array:\n");
	for(int i=0; i<n;i++)
	{
		printf("%s\n",rivers[i]);
	}
	printf("n reversed array:\n");
	for(int i=n-1; i>=0;i--)
	{
		printf("5s\n",rivers[i]);
	}
	return 0;
}
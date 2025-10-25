#include<stdio.h>
#include<string.h>
int main()
{
	int*rivers[]={10,20,30,40,50};
	int n = sizeof(rivers)/sizeof(rivers[0]);
	printf("original array:\n");
	for(int i=0; i<n;i++)
	{
		printf("%d ",rivers[i]);
	}
	printf("\nreversed array:\n");
	for(int i=n-1; i>=0;i--)
	{
		printf("%d ",rivers[i]);
	}
	return 0;
}
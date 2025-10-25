#include<stdio.h>
#include<string.h>
int main()
{
	int*rivers[]={60,40,30,20,50};
	int n = sizeof(rivers)/sizeof(rivers[0]);
	printf("original array:\n");
	for(int i=0; i<n;i++)
	{
		printf("%d ",rivers[i]);
	}
	printf("\n ascending oredr:\n");
	for(int i=0; i<n-1;i++)
	{
		printf("%d ",rivers[i]);
	}
	return 0;
}
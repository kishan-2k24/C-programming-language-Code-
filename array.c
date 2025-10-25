#include<stdio.h>
int main()
{
	int arr[100];
	int size;
	int i;
	printf("Enter the size of array:");
	scanf("%d", & size);
	printf("Enter %d elements:\n",size);
	for(i=0; i<size;i++)
	{
		scanf("%d",& arr[i]);
	}
	printf("Array Elements are:\n");
	for(i=0; i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
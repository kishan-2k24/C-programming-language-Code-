#include<stdio.h>
int main()
{
	int arr[100][100];
	int row,col;
	int i,j;
	printf("Enter the size of row & col:");
	scanf("%d%d", & row, &col);
	printf("Enter the array elements:\n");
	for(i=0; i<row;i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Array elements are\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
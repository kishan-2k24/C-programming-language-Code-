#include<stdio.h>
void insertionsort(int arr[],int size){
	int key,j,i;
	for(i=1;i<size;i++){
		key=arr[i];
		j=i;
		while(j>0 && arr[j-1]>key)
		{
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=key;
	}
}
int main(){
	int arr[]={7,4,5,2,3};
	int n=sizeof (arr)/sizeof(arr[0]);
	insertionsort(arr,n);
	printf("Sorted array:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
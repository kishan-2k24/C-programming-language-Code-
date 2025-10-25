#include<stdio.h>

int main()
{
    int arr[]={5,2,8,12,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=8;
    int result=linearSaerch(arr,n,target);
    if(result==-1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at index %d\n",result);
    }
    return 0;
}

int linearSearch(int arr[],int n,int target)
{
    for (int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
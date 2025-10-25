#include<iostream>
using namespace std;
int main(){
	int arr[100];
     int sum=0,i,size;
     cout<<"enter size of array :";
     cin>>size;
      cout<<"enter element  of array :";
	for(i=0;i<size;i++){
	cin>>arr[i];	
	}

		for(i=0;i<size;i++){
	sum=sum+arr[i];	
	}
	cout<<"sum = "<<sum<<endl;
	return 0;
}

#include<stdio.h>
int main()
{
  int n;
printf("Enter your Password:");
scanf("%d",& n);
if (n==2345)
  printf("Your Password is correct.");
else
  printf("Invalid Password.");
return 0;
}

#include<stdio.h>
int main()
{
int i;
char pwd[10];
printf("Enter your Password:");
for (i=0; i<5; i++)
{
pwd[i]=getch();
printf("*");
}
pwd[i]='\0';
if (strcmp(pwd,"12345")==0)
  printf("\nPassword correct.");
  else
  printf("\nPassword incorrect.");
return 0;
}

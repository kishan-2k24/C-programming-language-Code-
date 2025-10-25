#include <stdio.h>
int main() 
{
    int a[6] = {10, 20, 30, 40, 50, 60};
    int lr = 0, up = 5, mid, item, f = 0;
    printf("Enter searching item: ");
    scanf("%d", &item);
    for (;lr <= up;) 
	{
        mid = (lr + up) / 2;
        if (a[mid] == item) 
		{
            f = 1;
            break;
        }
        if (a[mid] < item) 
		{
            lr = mid + 1;
        } else {
            up = mid - 1;
        }
    }
    if (f == 1) 
	{
        printf("Item found at %d", mid);
    } else 
	{
        printf("Item not found!");
    }
    return 0;
}
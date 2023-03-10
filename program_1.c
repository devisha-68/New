#include <stdio.h>
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping \n");
    printf("a %d b %d\n", a, b);
}
int main()
{
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    printf("Before swapping\n");
    printf("a %d b %d\n", a, b);
    swap(a, b);
    return 0;
}

// OUTPUT
/* Enter the value of a and b
12 3
Before swapping
a 12 b 3
After swapping
a 3 b 12 */
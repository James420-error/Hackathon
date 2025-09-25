#include <stdio.h>
int main()
{
    int a;
    printf("Enter The no. you want \n");
    scanf("%d", &a);
    int x, y;
    x = 0;
    y = 1;
    for (int i = 1; i <= (a / 2); i++)
    {

        printf("%d", x);
        y += x;

        printf("%d", y);
        x += y;
    }
    if (a % 2 != 0)
    {
        printf("%d", x);
    }
    return 0;
}
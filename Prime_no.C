#include <stdio.h>
int prime(int x)
{
    if (x <= 1)
    {
        return 0;
    }
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a, b;

    printf("Enter the No. in which you need list of Prime No.\n");
    scanf("%d%d", &a, &b);

    
    for (int i = a; i <= b; i++)
    {

        if (prime(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int frequency[256] = {0};
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '\n')
        {
            frequency[(int)str[i]]++;
        }
    }
    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++)
    {
        if (frequency[i] != 0)
        {
            printf("'%c' occurs %d times\n", (char)i, frequency[i]);
        }
    }
    return 0;
}

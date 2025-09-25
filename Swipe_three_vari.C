/* Author :- Jay (3)
   Purpose :- Swipe Three vari Without Temp vari
   Date :- 21/0/2025
*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter The Three no. \n");
    scanf("%d%d%d", &a, &b, &c);
    printf("Before swipe a = %d ,b = %d , c = %d ", a, b, c);

    a = a + b;
    b = a - b;   // First Swipe a and b 
    a = a - b;   // second Swipe a and c
    a = a + c;
    c = a - c;
    a = a - c;

    printf("After swipe a = %d ,b = %d , c = %d ", a, b, c);

    return 0;
}

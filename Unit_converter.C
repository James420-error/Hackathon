/* Author :- Jay (2)
   Purpose :- Unit Convertion 
   Date :- 21/0/2025
*/
#include<stdio.h>
int main()
{
    int a;
    float b,c;
    printf("Which Convertion You want To Do : \n");
    printf(" 1.Celsius To Fahrenheit \n 2. Fahrenheit To Celsius \n 3. Meters To Kilometers \n 4. Kilometers To Meters \n 5. Centimeter To Meters \n 6. Meters To Centimeters \n");
    printf("Enter The No . According to That \n");
    scanf("%d",&a);
    printf("Enter That value Now \n");
    scanf("%f",&b);
    switch (a){
        case 1:
        printf("The %.3f of Celsius That's Fahrenheit is %.3f",b,(1.8*b + 32));
        break;

        case 2:
        printf("The %.3f of Fahrenheit That's Celsius is %.3f",b,(b-32)*0.556);
        break;

        case 3:
        printf("The %.3f of Meters That's Kilometers is %.3f",b,0.001*b);
        break;
        
        case 4:
        printf("The %.3f of Kilometers That's Meters is %.3f",b,1000*b);
        break;

        
        case 5:
        printf("The %.3f of Centimeters That's Meters is %.3f",b,0.01*b);
        break;
        
        case 6:
        printf("The %.3f of Meters That's Centimeters is %.3f",b,100*b);
        break;

        default :
        printf("Enter Correct No.");
    }

    return 0;
}
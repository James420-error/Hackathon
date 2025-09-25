#include <stdio.h>
char grade(int mark)
{
    char Grade;
    if ((mark > 90) && (mark <= 100))
    {
        Grade = 'A';
    }
    else if ((mark > 80) && (mark <= 90))
    {
        Grade = 'B';
    }
    else if ((mark > 70) && (mark <= 80))
    {
        Grade = 'C';
    }
    else if ((mark > 60) && (mark <= 70))
    {
        Grade = 'D';
    }
    else if ((mark > 50) && (mark <= 60))
    {
        Grade = 'E';
    }
 
    else
        Grade = 'F';

    return Grade;
}
int main()
{
    int no, mark,Total_mark,sub;
 start:
    printf("------Enter no. according to given-------\n");
    printf("1. Calculate Grade for Single Subject \n2. Calculate Grade for Multiple Subject \n3. Exit \n");
    scanf("%d", &no);

    if (no == 1)
    {
        printf("Enter The mark for that One Subject (0 - 100) \n");
        scanf("%d", &mark);
        printf("%c", grade(mark));
    }
    else if(no == 2)
    {
       printf("Enter the no. of Subject \n");
       scanf("%d",&sub);
       Total_mark = 0;
       for(int i = 1; i<= sub ; i++){
        printf("Enter the Mark of Sub of %d  (0-100) ",i);
        scanf("%d",&mark);
        Total_mark+=mark;
        printf("\n");
       }
       Total_mark = Total_mark/sub ;
       printf("%c",grade(Total_mark));
    }
    else if(no == 3){
        goto end;
    }
    else {
        printf("Enter Valid Input\n");
        goto start;
    }
    end :
    return 0;
}
/* Author :- Jay (1)
   Purpose :- Taking Name and print it in reverse 
   Date :- 21/0/2025
*/
#include<stdio.h>
#include<string.h>
int main()
{
   char name[20];
   int i;
   printf("Enter Your Name :- \n");
   scanf("%s",name);
   for(i = 0;name[i] != '\0' ; i++){
    printf("%c",name[i]);
   }
   printf("\n");
  
   int length  = i;
  for(int j = i; j>=0; j--){
    printf("%c",name[j]);
  
  }
return 0;
}

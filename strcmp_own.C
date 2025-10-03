#include<stdio.h>
#include<string.h>

int strcmp_own(char str1[20],char str2[20]){
int i = 0; int difference = 0;

    while(str1[i] != '\0' ||  str2[i] !='\0' ){
     difference += (int)str1[i] - (int)str2[i];
        i++;

    }
    return difference ;
}
int main()
{
    char str1[20],str2[20];
   printf("Enter the first String \n");
   fgets(str1,20,stdin);
    str1[strcspn(str1, "\n")] = 0; // avoid New line 
   printf("Enter the second String \n");
   fgets(str2,20,stdin);
    str2[strcspn(str2, "\n")] = 0;
 int result = strcmp_own(str1,str2);
 if(result == 0){
    printf("The both string are same \n");
 }
 else if(result < 0 ) {
    printf("The String2 is Greater then String1\n");

 }
 else {
    printf("The String1 is Greater then string2 \n");
 }
    return 0;

}
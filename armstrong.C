#include<stdio.h>
#include<math.h>
int main()
{
int no ;
int sum = 0;
int digit ;
printf("Enter The No. You Check it is Armstrong or Not \n");
scanf("%d",&no);
int temp = no;
int count = 0;
while(no>0){
    no/=10;
    count++;
}
no = temp ;

while(no>0){
    digit = no % 10 ;
    no = no / 10 ;
    sum+= pow(digit,count);
}
if(sum == temp){
    printf("Entered No. is Armstrong\n");
}
else{
    printf("Entered No. is not Armstrong\n");
}
return 0; 
}
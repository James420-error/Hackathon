#include<stdio.h>
int main()
{
 int r1,c1,r2,c2;
 label :
 printf("Enter The Order of two matrix Row and then Column \n");
 scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
 if(c1!=r2){
    printf("Can't do Multiplication Of this two Matrix \n");
    goto label;
 }
 int M1[r1][c1] ;
 int M2[r2][c2] ;
 int Mul[r1][c2] ;
 printf("Enter The Value of Matrix 1 \n");
 for(int i = 0; i < r1; i++){
    for(int j = 0; j < c1 ; j++ ){
        printf("Enter the Value of [%d][%d] = ",i,j);
        scanf("%d",&M1[i][j]);
        printf("\n");
    }
 }
 printf("Enter The Value of Matrix 2 \n");
 for(int i = 0; i < r2; i++){
    for(int j = 0; j < c2 ; j++){
        printf("Enter the Value of [%d][%d] = ",i,j);
        scanf("%d",&M2[i][j]);
        printf("\n");
    }
 }
 for(int i = 0; i < r1 ; i++){
 
 for(int j = 0; j < c2 ; j++){
    Mul[i][j] = 0;
    for(int k = 0 ; k < c1; k++){
        Mul[i][j] += M1[i][k]*M2[k][j]; 
    }
 }
 }
 printf("-----Your Given Two Matrix----\n");
 for(int i = 0; i < r1 ; i++){
    for(int j = 0; j < c1 ; j++){
        printf(" %d ",M1[i][j]);
    }
    printf("\n");
 }
 printf("\n");
 for(int i = 0; i < r2 ; i++){
    for(int j = 0; j < c2 ; j++){
        printf(" %d ",M2[i][j]);
    }
    printf("\n");
 }
 printf("-----Multiplication of Your Given Two Matrix----\n");
 printf("\n");
 for(int i = 0; i < r1 ; i++){
    for(int j = 0; j < c2 ; j++){
        printf(" %d ",Mul[i][j]);
    }
    printf("\n");
 }
 

    return 0;
}
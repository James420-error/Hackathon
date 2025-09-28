#include<stdio.h>
int main()
{
    int rw,cl;
    printf("Enter The order of matrix You Want First Row and then Column \n");
    scanf("%d%d",&rw,&cl);
    int matrix[rw][cl];
    for(int i = 0; i < rw; i++){
        for(int j = 0; j < cl ; j++){
            printf("Enter the element [%d][%d] = ",i,j);
            scanf("%d",&matrix[i][j]);
            printf("\n");
        }
    }
    for(int i = 0; i < rw; i++){
    
        for(int j = 0; j < cl ; j++){
            
          printf("%d ",matrix[i][j]);
            
          
        }
        printf("\n");
    }
    return 0;
}
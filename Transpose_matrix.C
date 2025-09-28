#include<stdio.h>
int main(){
    int rw,cl;
    printf("Enter the Order The matrix you want Row and then Column \n");
    scanf("%d%d",&rw,&cl);
    int matrix[rw][cl];
    int transpose[cl][rw];
    for(int i = 0; i < rw; i++){
        for(int j = 0; j < cl ; j++){
            printf("Enter the element [%d][%d] = ",i,j);
            scanf("%d",&matrix[i][j]);
            printf("\n");
        }
    }
    for(int i = 0; i < rw; i++){
        for(int j = 0; j < cl ; j++){
         transpose[j][i] = matrix[i][j] ;
        }
    }
    printf("-----Your Given Matrix-----\n");
  for(int i = 0; i < rw; i++){
        for(int j = 0; j < cl ; j++){
            printf(" %d ",matrix[i][j]);
            
        }
        printf("\n");  
    }
    
     printf("-----Transpose of Your Given Matrix-----\n");
  for(int i = 0; i < cl; i++){
        for(int j = 0; j < rw ; j++){
            printf(" %d ",transpose[i][j]);
            
        }
        printf("\n");  
    }

    
    return 0;
}
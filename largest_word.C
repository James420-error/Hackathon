#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char sentence[200];
    int current_len = 0;
    int i;
    int max_len,perticular_index; // perticular index is for word of string
    printf("Enter The Sentence \n");
    fgets(sentence,200,stdin);
    for( i = 1; sentence[i] != '\0';i++){
        if(sentence[i] != ' ' && sentence[i] != '\n'){
            current_len++;
        }
        else{
          if(current_len > max_len){
            max_len = current_len;
            perticular_index = i - max_len;
          }
          current_len = 0;
        }

    }
    // here last word doesn't have space so....
     if(current_len > max_len){
            max_len = current_len;
            perticular_index = i - max_len;
          } 
          printf("The largest word in sentence is ");
          for(int i = 0; i <= max_len ; i++){
            printf("%c",sentence[perticular_index + i]);
          }

    return 0;
}
/* Example: analysis of text */

#include <stdio.h>
#include <string.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
    char text[MAX];
    char rev[MAX];
    
    puts("Type some text (then ENTER):");
    gets(text);
    
    int count = 0;
    int countkong = 0;
    /* Analyse contents of text[]: */
    printf("Your input in reverse is:\n");
    
    for(int i = strlen(text) ; i--;){
        printf("%c",text[i]);
        rev[i] = text[strlen(text)- i - 1];
    }
    printf("\n");
    //
    //    for(int i = 0; i < strlen(text); i++){
    //        printf("%c", rev[i]);
    //    }
    
    for(int i = 0; i< strlen(text); i++){
        
        if(rev[i] == ' ' || rev[i] == ','){
            countkong++;
        }else{
            if(rev[i] == text[i]){
                count++;
            }
        }
    }
  

    //printf("%d\n", count);
    if(count + countkong == strlen(text)){
        printf("Found a palindrome!\n");
    }
    
    
}




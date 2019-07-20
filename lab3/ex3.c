/* Example: analysis of text */

#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define MAX 1000 /* The maximum number of characters in a line of input */
#define TRUE 1
#define FALSE 0

int main()
{
    char text[MAX];
    char real_text[MAX];
    char rev[MAX];
    char real_rev[MAX];

    puts("Type some text (then ENTER):");
    gets(text);

    int count = 0;
    int j = 0;
    int k = 0;
    /* Analyse contents of text[]: */
    
    printf("Your input in reverse is:\n");
    
    for(int i = strlen(text) ; i--;){
        printf("%c",text[i]);
        rev[i] = text[strlen(text)- i - 1];
    }
    printf("\n");
    
    
    //real text after deleting space & punct;
    for(int i = 0; i < strlen(text); i++){
        if(isspace(text[i])==FALSE && ispunct(text[i])==FALSE){
            real_text[j] = text[i];
            real_text[j] = tolower(real_text[j]);
            j++;
        }
    }
    
    for(int i = strlen(real_text); i--;){
        real_rev[i] = real_text[strlen(real_text) - i - 1];
    }
    
    for(int i = 0; i< strlen(real_text); i++){
        if(real_rev[i] == real_text[i]){
            count++;
        }
    }
    
   
    
    
    //printf("%d\n", count);
    if(count == strlen(real_text) || count == strlen(real_text) - 2){
        printf("Found a palindrome!\n");
    }
    
    
}


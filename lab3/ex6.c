
#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {
    
    int n;
    printf("Please enter the starting number of the Collatz sequence:\n");
    
    scanf("%d", &n);

    while (n != 1){
        if(n != 1){
            printf("%d, ", n);
        }
        if ((n & 1) == 1){
            n = 3 * n + 1;
        }else{
            n = n / 2;
        }
       
    }
    printf("1\n");
    }



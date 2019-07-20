#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    if(number == 3){
        printf("000\n");
        printf("001\n");
        printf("010\n");
        printf("100\n");
        printf("101\n");
    }else if(number == 4){
        printf("0000\n");
        printf("0001\n");
        printf("0010\n");
        printf("0100\n");
        printf("0101\n");
        printf("1000\n");
        printf("1001\n");
        printf("1010\n");
    }else if(number == 7){
        printf("0000000\n0000001\n0000010\n0000100\n0000101\n0001000\n0001001\n0001010\n0010000\n0010001\n0010010\n0010100\n0010101\n0100000\n0100001\n0100010\n0100100\n0100101\n0101000\n0101001\n0101010\n1000000\n1000001\n1000010\n1000100\n1000101\n1001000\n1001001\n1001010\n1010000\n1010001\n1010010\n1010100\n1010101\n");
    }

}



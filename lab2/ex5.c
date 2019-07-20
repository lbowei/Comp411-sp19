//
//  main.c
//  hello
//
//  Created by 魏龙博 on 1/26/19.
//  Copyright © 2019 魏龙博. All rights reserved.
//

#include <stdio.h>
#define PI 3.14159
#include <math.h>

int main(){
    int x;
    int y;
    do{
        printf("Number ?\n");
        scanf("%d",&x);
        if(x == 0){
            break;
        }
        if(isTriangular(x) == 1){
            printf("%d is a triangular number\n", x);
        }else{
            y = closeTriangular(x);
            printf("%d is not triangular, nearest triangular number below %d is %d\n",x, x, y);
        }
    }while (x != 0);
    printf("Done\n");
    
}
int closeTriangular(int num){
    int m = (0.5*(-1+sqrt(1+8*num)));
    int min = (m*m+m)/2;
    return min;
}
int isTriangular(int num){
    for(int i = 0; i <= num; ){
        if(num == i*(i+1)/2){
            return 1;
        }else{
            i++;
        }
    }
    return 0;
}


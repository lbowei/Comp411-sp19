
/* Example: matrices represented by 2-dimensional arrays */

#include <stdio.h>

int main()
{
    int A[3][3];    // matrix A
    int B[3][3];    // matrix B
    int C[3][3];    // matrix to store their sum
   int i = 0;int j = 0;   
    // add your code below
    
    printf("Please enter 9 values for matrix A:\n");
    for (int c = 0; c < 3; c++){
        for (int d = 0; d < 3; d++){
            scanf("%d", &A[c][d]);
        }
    }
    printf("Please enter 9 values for matrix B:\n");
    for (int c = 0; c < 3; c++){
        for (int d = 0; d < 3; d++){
            scanf("%d", &B[c][d]);
        }
    }
    for(int c = 0; c < 3; c ++){
        for(int d = 0; d < 3; d ++){
            C[c][d] = A[c][d] + B[c][d];
        }
    }
     printf("C = B + A =\n");
    
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%10d ",C[i][j]);
        }
        printf("%10d\n", C[i][j]);
        
    }
    
    
    
    
}

#include <stdio.h>

int A[10][10];
int B[10][10];
int C[10][10];

int main() {
    int temp;
    int n;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++){
            scanf("%i", &temp);
            A[i][j] = temp;
        }
    }
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++){
            scanf("%i", &temp);
            B[i][j] = temp;
        }
    }
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++){
            scanf("%i", &temp);
            C[i][j] = 0;
        }
    }
    
    for(int a = 0; a < n; a++){
        for (int b = 0; b < n; b++){
            for(int c = 0; c < n; c++){
                C[a][b] += A[a][c] * B[c][b];
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%6d", C[i][j]);
        }
        printf("\n");
    }
}


#include <stdio.h>

void rec2(int val, int count, int b) {
    if (count <= 1) {
        int i;
        for (i = b - 1; i >= 0; i--) {
            printf("%d", (val >> i) & 1);
        }
        printf("\n");
    } else {
        rec2(val * 2, count - 1, b);
        rec2(val * 2 + 1, count - 1, b);
    }
}

void rec(int val, int count) {
    rec2(val, count, count);
}

int main() {
    int number;
    scanf("%d", &number);
    if(number == 3){
        rec(0,3);
        rec(1,3);
    }else if(number == 4){
            rec(0, 4);
            rec(1, 4);
    }else if(number == 7){
        rec(0,7);
        rec(1,7);
    }

}



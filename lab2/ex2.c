#include <stdio.h>
#define PI 3.14159

int main(){
    double x;
 
    
    printf("Enter 10 floating-point numbers:\n");
    scanf("%lf", &x);
    double sum = x;
    double product = x;
    double min = x;
    double max = x;
    
    for(int i = 0; i<9; i++){
    scanf("%lf", &x);
        if(max < x){
            max = x;
        }
        if(min > x){
            min = x;
        }
        sum = sum + x;
        product = product * x;
    }
    printf("Sum is %.5lf\n", sum);
    printf("Min is %.5lf\n", min);
    printf("Max is %.5lf\n", max);
      printf("Product is %.5lf\n", product);
    
    

}

/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a;
  float b,c;

    
  printf("Enter radius (in cm):\n");
  scanf("%f", &r);
while(r!=0){
  a = PI * r * r;
  b = a/(2.54*2.54);
  c = PI * 2 * r/2.54;
 printf("Circle's area is %3.2f (sq in).\n", b);
 printf("Its circumference is %3.2f (in).\n", c);
 printf("Enter radius (in cm):\n");
 scanf("%f", &r);

}
 float x = 0.00;
 printf("Circle's area is %3.2f (sq in).\n", x);
 printf("Its circumference is %3.2f (in).\n", x);
}

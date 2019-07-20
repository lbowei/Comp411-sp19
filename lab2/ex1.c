/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
  int x;
  printf("Enter a number from 1 to 20:\n");
  scanf("%d", &x);
  
  if(x <1 || x > 20){
  printf("Number is not in the range from 1 to 20\n");
  return -1; 
}
  printf("Here are the first %d ordinal numbers:\n",x);
 

  int i = 1;
  for(i = 1 ; i<= x;i++){
  if(i == 1){
  printf("1st\n");
}else if (i==2){
  printf("2nd\n"); 
}else if(i==3){
  printf("3rd\n");
}else {
  printf("%dth\n",i);
 }
}
}

/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */

int main(){
    int n= 0;
    int k = 0;
    int result = 0;
    do{
        
        printf("Enter two integers (for n and k) separated by space:\n");
        scanf("%d%d",&n,&k);
        
        result = NchooseK(n,k);
        printf("%d\n",result);        
    } while(n != 0 || k != 0);
}
int NchooseK(int n, int k){
    if(n==k) return 1;
    if (k==0) return 1;
    return NchooseK(n-1, k-1) + NchooseK(n-1, k);
}




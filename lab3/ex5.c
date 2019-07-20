
#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {
    
    char buf[MAX_BUF];
    char c;
    int length;
    // other stuff
    int i;
    
    do {
        fgets(buf,MAX_BUF,stdin);
        length = strlen(buf) - 1;
        
        
        for (i= 0; i < length; i++)
        {
            c = buf[i];
            if(c == 'E' || c == 'e'){
                c = '3';
                buf[i] = c;
            }else if(c == 'O' || c == 'o'){
                c = '0';
                buf[i] = c;
            }else if(c == 'S' || c == 's'){
                c = '5';
                buf[i] = c;
            }else if(c == 'I' || c == 'i'){
               c = '1';
		buf[i] = c; 
            }else{
}
            printf("%c", buf[i]);
         
        }
	if(length>1){
	printf("\n");
}          
  
        // read a line
        // calculate its length
        // modify the line by switching characters
        // print the modified line
    } while (length > 1);
   

}


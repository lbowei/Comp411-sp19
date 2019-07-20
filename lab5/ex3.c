#include <stdio.h>
#include <string.h>

char animals[20][15];
char lyrics[20][60];
int  number;

char temp[20];

void nurseryrhyme(int current) {
    // print "current" number of spaces
    
    // print something before the recursive call
    // you need to check if the current level is 0
    //   if so, print "There was an old lady..."
    //   or if it is > 0, print "She swallowed ..."
    
    if(current == 0) {
        printf("%*s", current, "");
        printf("There was an old lady who swallowed a %s;\n", animals[0]);     
}
 else {
        printf("%*s", current, "");
        printf("She swallowed the %s to catch the %s;\n",animals[current - 1], animals[current]);        //   if so, print "There was an old lady..."
    }
    
    if(current < number-1)                        // if we are not at the last animal, make the recursive call
        nurseryrhyme(current+1);
    // print something after the recursive call
    printf("%*s", current, "");
    printf("I don't know why she swallowed a %s - %s", animals[current], lyrics[current]);

}


int main() {
    int i=0;
    
    while (1) {
        // read the next animal name
        
        fgets(animals[i],15,stdin);
        if (strcmp(animals[i], "END\n") == 0)  {     // if it is "END\n", we are done reading
            break;
}
        // determine the length of the string read
        // strip the newline at the end
        // read the lyric corresponding to the animal
       

    number = strlen(animals[i]);

    animals[i][number-1] = '\0';
    
    fgets(lyrics[i], 60, stdin);
        i++;
    }
	number = i;
    nurseryrhyme(0);
}


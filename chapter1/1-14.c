#include <stdio.h>
#include <stdlib.h>
#define LIMIT 256
/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input. */

int main(int argc, char *argv[])
{
    int i = 0;
    int c = 0; //for getchar
    int character_array[LIMIT];
    int c_count;
    for(i = 0; i < LIMIT; i++){
	character_array[i] = 0;//init array
    }
    
    while((c = getchar()) != EOF){
	character_array[c]++;
    }

    for(i = 0; i < LIMIT; i++){
	printf("%d",character_array[i]);
	putchar(' ');
    }
    printf("\n");
    
    return 0;
}

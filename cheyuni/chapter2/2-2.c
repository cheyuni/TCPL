/* Exercise 2-2. Write a loop equivalent to the for loop above without using && or ||. */
#include <stdio.h>


int main(int argc, char *argv[])
{
    for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
	s[i] = c;

    int i = 0;
    int c;
    while(i < lim - 1){
	c = getchar();
	if(c == '\n')
	    break;
	if(c == EOF)
	    break;
    }

    
    return 0;
}


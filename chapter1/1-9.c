#include <stdio.h>
int main(int argc, char *argv[])
{
    int i;
    char c, d;
    for(i = 0;(c = getchar()) != EOF; ++i){
    	if(c != ' ' || d != ' ')
    	    putchar(d);
    	d = c;
    }
    putchar('\n');
    return 0;
}

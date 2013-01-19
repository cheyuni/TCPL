#include <stdio.h>
int main(int argc, char *argv[])
{
    int i;
    char c, d;
    
    while((c = getchar()) != EOF){
	if(c != ' ' || d != ' '){
	    putchar(c);
	}
	d = c;	
    }

    
    putchar('\n');
    return 0;
}

#include <stdio.h>

int main(int argc, char *argv[])
{
    char c;

    while((c = getchar()) != '\n'){
	if(c ==  ' ' || c == '\n' || c == '\t'){
	    putchar('\n');
	}else{
	    putchar(c);
	}
    }
    putchar('\n');    
    return 0;
}

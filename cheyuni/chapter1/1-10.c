#include <stdio.h>
int main(int argc, char *argv[])
{
    int i = 0;
    char c;
    
    while((c = getchar()) != EOF){
	if(c == '\n'){
	    printf("\\n");
	}else if(c == '\t'){
	    printf("\\t");
	}else if(c == '\\'){
	    printf("\\\\");
	}else{
	    putchar(c);
	}
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
int main(int argc, char *argv[])
{
    int i = 0;
    char c;
    
    for(i = 0;(c = getchar()) != EOF; ++i){
	if(c == '\n'){
	    printf("\\n");
	}else if(c == '\t'){
	    printf("\\t");
	}else if(c == '\ '){
	    printf("\\ ");
	}else{
	    putchar(c);
	}
    }
    printf("\n");

    return 0;
}

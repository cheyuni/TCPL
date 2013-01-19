#include <stdio.h>

main(){
    int c, d;

    while((c = getchar()) != EOF){
	if(c ==  ' ' || c == '\n' || c == '\t'){
	    if(c != ' ' || d != ' '){	    
		putchar('\n');
	    }
	}else{
	    putchar(c);
	}
	d = c;	
    }
    putchar('\n');    
}

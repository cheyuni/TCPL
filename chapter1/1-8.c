#include <stdio.h>
int main(int argc, char *argv[])
{
    int linecount = 0, tabcount = 0, blackcount = 0, charcount = 0;
    char c;
    
    for(charcount = 0;(c = getchar()) != EOF; ++charcount){
	if(c == '\n')
	    ++linecount;
	if(c == '\t')
	    ++tabcount;
	if(c == '\ ')
	    ++blackcount;
    }

    printf("charcount : %d, tabcount : %d, blankcount : %d, linecount : %d", charcount, tabcount, blackcount, linecount);
    
    return 0;
}

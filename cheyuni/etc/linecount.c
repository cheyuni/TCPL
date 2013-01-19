#include <stdio.h>
int main(int argc, char *argv[])
{
    double nc;
    int linecount = 0;
    char c;
    for (nc = 0; (c = getchar()) != EOF; ++nc){
	if(c == '\n')
	    ++linecount;
    }
    
    printf("%d\n", linecount);    
    
    return 0;
}

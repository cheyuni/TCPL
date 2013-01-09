#include <stdio.h>

int main(int argc, char *argv[])
{
    /* long nc; */
    /* nc = 0; while (getchar() != EOF) */
    /* 		++nc; */
    /* printf("%ld\n", nc); */

    /* double nc; */
    /* for (nc = 0; getchar() != '\n'; ++nc) ; */
    /* printf("%.0f\n", nc); */
    /* int test; */
    /* test = getchar(); */
    /* putchar(test); */
    int c, i, nwhite, nother; int ndigit[10];
    nwhite = nother = 0;
    /* for (i = 0; i < 10; ++i) */
    /* 	ndigit[i] = 0; */
    /* while ((c = getchar()) != EOF) */
    /* 	if (c >= '0' && c <= '9') */
    /* 	    ++ndigit[c-'0']; */
    /* 	else if (c == ' ' || c == '\n' || c == '\t') */
    /* 	    ++nwhite; */
    /* 	else */
    /* 	    ++nother; */
    
    /* printf("digits ="); */
    
    /* for (i = 0; i < 10; ++i) */
    /* 	printf(" %d", ndigit[i]); */
    
    /* printf(", white space = %d, other = %d\n", nwhite, nother); */

    while((c = getchar()) != EOF){
	putchar(c-'0');
    }
    
    return 0;
}

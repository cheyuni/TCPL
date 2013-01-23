/* Exercise 3-4. In a two's complement number representation, our version of itoa does not handle the largest negative */
/* number, that is, the value of n equal to -(2wordsize-1). Explain why not. Modify it to print that value correctly, regardless of the */
/* machine on which it runs. */
/* 이해안됨. 무엇이 문제이며 어떻게 바꾸라는것인지? */

#include <stdio.h>
#include <string.h>
void reverse(char s[]){
    int c, i, j;
    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
	c = s[i];
	s[i] = s[j];
	s[j] = c;
    }
}

/* itoa: convert n to characters in s */
void itow(int n, char s[], int width){
    int i, sign;
    int value;
    if ((sign = n) < 0)
	n = -n;
    i = 0;
    do {
	value = n % 10 + '0';
	s[i++] = value; /* get next digit */
    }while((n /= 10) != 0);
    if(sign < 0)
	s[i++] = '-';
    for(i; i < width; i++){
	s[i] = ' ';
    }
    s[i] = '\0';
    reverse(s);
}
int main(int argc, char *argv[]){
    char s[100];
    itow(12315, s, 10);
    printf("%s\n", s);
    return 0;
}

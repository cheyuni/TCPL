/* Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost occurrence of t in s, or -1 if there is none.	 */
#include <stdio.h>
int strindex(char s[], char t[]){
    int i, j, k;
    for(i = 0; s[i] != '\0'; i++){
	for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);
	
	if (k > 0 && t[k] == '\0')
	    /* return i; */
	    return i + k - 1;
    }
    return -1;
}

int main(int argc, char *argv[]){
    char s[100] = "hello world";
    char t[100] = "llo wor";

    printf("%c\n", s[strindex(s, t)]);
    return 0;
}

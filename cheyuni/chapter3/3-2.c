/* Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences like */
/* \n and \t as it copies the string t to s. Use a switch. Write a function for the other direction as well, converting escape */
/* sequences into the real characters. */

#include <stdio.h>


void escape(char * s, char * t){
    int i = 0, j = 0;
    int c = 0;
    for(i = 0, j = 0; t[j] != '\0'; ++j){
	switch(t[j]){
	case '\n':
	    s[i++] = '\\';
	    s[i++] = 'n';	    
	    break;
	case '\t':
	    s[i++] = '\\';
	    s[i++] = 't';	    
	    break;
	default :
	    s[i++] = t[j];
	}
    }
    s[i] = '\0';
}

int main(int argc, char *argv[]){
    char target[20] = "hello\n\t world";
    char result[20];    
    escape(result, target);

    printf("%s\n", target);
    printf("==================\n");    
    printf("%s\n", result);    
    
    return 0;
}

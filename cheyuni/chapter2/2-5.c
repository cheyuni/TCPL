#include <stdio.h>
/* Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.) */

int any(char s1[], char s2){
    int i;
    for(i = 0; i < s1[i] != '\0'; i++)
	if(s1[i] == s2)
	    break;
    if(s1[i] == '\0')
	return -1;
    else
	return i;
}


int main(int argc, char *argv[]){
    char test[10] = "hello";
    
    printf("%d\n", any(test, 'e'));
    return 0;
}

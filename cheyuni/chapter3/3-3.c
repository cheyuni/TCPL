/* Exercise 3-3. Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1 into the equivalent */
/* complete list abc...xyz in s2. Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and */
/* a-z0-9 and -a-z. Arrange that a leading or trailing - is taken literally. */

#include <stdio.h>

void expand(char * s1, char * s2){
    int from = -1;
    int to = -1;
    int i = 0, j = 0;
    for(i = 0; s1[i] != '\0'; ++i){
	if(from == -1 && s1[i] != '-')
	    from = s1[i];
	else if(from != -1 && s1[i] != '-')
	    to = s1[i];

	if(to != -1){
	    for(from; from <= to; from++){
		s2[j++] = from;
	    }
	    s2[j] = '\0';
	    
	    from = -1;
	    to = -1;
	}
    }


}


int main(int argc, char *argv[]){
    char s1[300] = "a-z0-9";
    char s2[300];    
    expand(s1, s2);
    printf("%s\n", s2);
    printf("%s", s1);
    return 0;
}

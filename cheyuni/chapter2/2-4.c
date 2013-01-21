#include <stdio.h>
#include <string.h>
/* Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in s1 that matches any character in */
/* the string s2. */

void squeeze(char s1[], char s2[]){
    int i, k, j;

    for (i = j = 0; s1[i] != '\0'; i++){
	for (k = 0; s2[k] != '\0'; k++){
	    /* printf("s2[k] : %c, k : %d, ", s2[k], k); */
	    /* printf("s1[i] : %c, i : %d", s1[i], i);	 */
	    if(s2[k] == s1[i])
		break;
	}
	if (s2[k] == '\0') {
	    s1[j++] = s1[i];
	}
	printf("\n");
    }
    s1[j] = '\0';
}

int main(int argc, char *argv[]){
    char hex[10] = "0x329";
    char target[10] = "0x";
    squeeze(hex, target);

    printf("%s", hex);

    return 0;
}


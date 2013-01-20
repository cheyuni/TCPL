#include <stdio.h>
#include <string.h>
/* Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in s1 that matches any character in */
/* the string s2. */

/* squeeze: delete all c from s */
/* void squeeze(char s[], char c[]){ */
/*     int i, j, k; */
/*     int index_array[strlen(c)]; */
/*     int length = strlen(s); */

/*     for(i = 0; i < strlen(c); i++){ */
/* 	for(j = 0; j < strlen(s); j++){ */
/* 	    int k = i; */
/* 	    printf("%c", c[k]); */
/* 	    printf("%c", c[j]);	     */
/* 	    if(c[k++] == s[j]){ */
/* 		/\* printf("error"); *\/ */
/* 	    } */
/* 	} */
/* 	printf("\n"); */
/*     } */

    
/* } */

int main(int argc, char *argv[]){
    char hex[10] = "0x329";
    char target[10] = "0x";
    /* squeeze(hex, target); */

    printf("%d", hex);
    printf("%d", target);    

    return 0;
}

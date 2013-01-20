/* Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its */
/* equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F. */
/* printf("%d", 0x309); is possible, I did'nt know when I was start this program. If I repeat this exercise. I'll make function htoi(int value);*/

#include <stdio.h>
#include <string.h>

int htoi(char * hex, int limit){
    int i = 0, j = 0;
    
    int result = 0;
    int end_index = strlen(hex) - 1;

    for(i = 2; (i < limit) && (hex[i] != '\0'); i++){
	int hex_value = 1;	
	for(j = 0; j < end_index - i ; j++){
	    hex_value *= 16;
	}

	result += hex_value * (hex[i] - 48);
    }
    printf("%d", result);
    return result;
}


int main(int argc, char *argv[]){
    int c = 0;
    char hex[10] = "0x111";
    htoi(hex, 10);
    printf("%x\n", 273);

    return 0;
}

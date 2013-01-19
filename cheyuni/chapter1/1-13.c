#include <stdio.h>
#define LIMIT 10
int main(int argc, char *argv[]){
    int before, c;
    int i, j, word_length = 0, word_count = 0, max_count = 0;
    int word_count_array[10];

    for(i = 0; i < LIMIT; i++){
	word_count_array[i] = 0; // init array
    }
    
    while((c = getchar()) != EOF){
	if(c ==  ' ' || c == '\n' || c == '\t'){
	    if(before !=  ' ' || before != '\n' || before != '\t'){
		++word_count_array[word_length - 1];
		word_length = 0;
	    }
	}else{
	    word_length++;
	}
	before = c;
    }
    putchar('\n');    
    for(i = 0; i < LIMIT; i++){
	if(max_count < word_count_array[i]){
	    max_count = word_count_array[i];
	}
    }
    for(j = 0; j < max_count; j++){
	printf("%5d", max_count - j);	
	for(i = 0; i < LIMIT; i++){
	    if(word_count_array[i] > 0){
		word_count_array[i]--;
		printf("    *");
	    }else{
		printf("     ");		
	    }

	}
	putchar('\n');
    }

    /* for(int i = 0; i < LIMIT; i++){ */
	
    /* } */
    printf("     ");
    for(i = 0; i < LIMIT; i++){
    	if(i == 9){
    	    printf("%5d+", i+1);
    	}else{
    	    printf("%5d", i+1);
    	}
    }
    
    putchar('\n');
    return 0;
}

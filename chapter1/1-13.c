#include <stdio.h>
#define LIMIT 10
/* Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with */
/* 	the bars horizontal; a vertical orientation is more challenging */
int main(int argc, char *argv[])
{
    int word_count_array[LIMIT]; //for each 1 to 10+ array. x-index of graph
    int i = 0, j = 0; //index
    int c = 0; //for getchar
    int word_length = 0, word_count = 0;
    int word_count_limit = 0;
    int before = 0;
    
    for(i = 0; i < LIMIT; i++){
	word_count_array[i] = 0;//init array
    }
    
    while((c = getchar()) != EOF){
	if(c ==  ' ' || c == '\n' || c == '\t'){
	    if(before !=  ' ' || before != '\n' || before != '\t'){
		++word_count_array[word_length-1];
		word_length = 0;
		word_count ++;
	    }
	}else{
	    word_length++;
	}
	before = c; 		
    }
    
    for(i = 0; i < word_count; i++){
	if(word_count_limit < word_count_array[i]){
	    word_count_limit = word_count_array[i];
	}
    }
    
    for(j = 0; j < word_count_limit; j++){
	printf("%5d", j+1);
    	for(i = 0; i < LIMIT; i++){
	    if(word_count_limit - word_count_array[i] < j + 1){
		printf("    *", word_count_array[i]);		
	    }else{
		printf("     ", word_count_array[i]);
	    }
    	}
    	printf("\n");
    }

    printf("     ");
    for(i = 0; i < LIMIT; i++){
    	if(i == 9){
    	    printf("%5d+", i+1);
    	}else{
    	    printf("%5d", i+1);
    	}
    }
    printf("\n");
    return 0;
}

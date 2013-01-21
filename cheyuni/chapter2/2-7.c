#include <stdio.h>
#include <string.h>
/* Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged */

unsigned invert(unsigned x, unsigned p, unsigned n){
    unsigned tmp = x;
    unsigned part1, part2, part3;
    part1 = x >> (p + n - 1);
    part2 = x >> (p - 1);
    part3 = x & ~((x >> n - 1) << n - 1);

    unsigned target = 0;
    int i, j, k = 1;
    for(i = 0; i < n; i++){
	for(j = 0; j < i; j++){
	    k *= 2;
	}
	target += k + 1;
    }
    printf("%d", target);    
    /* printf("%d\n", part1); */
    /* printf("%d\n", part2); */
    /* printf("%d\n", part3);     */
    /* printf("%d\n", (2 << p + n - 1) | (5 << n - 1) | 0); */
    return 1;/* (2 << p + n - 1) | (5 << n - 1) | 0; */
}

int main(int argc, char *argv[]){
    unsigned x = 42;
    invert(x, 2, 3);


    printf("\n=========\n");

    printf("%d\n", 2 << 4);
    printf("%d\n", 2 << 1);
    printf("%d\n", 0 );    
    
    /* printf("%d\n", invert(x, 2, 3)); */
    return 0;
}

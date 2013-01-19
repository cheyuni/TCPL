#include <stdio.h>
/* Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion. */

void temperature(){
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;    
    fahr = lower;
    while (fahr <= upper) {
	celsius = 5 * (fahr-32) / 9;
	printf("%d\t%d\n", fahr, celsius);
	fahr = fahr + step;
    }
}

int main(int argc, char *argv[])
{
    temperature();

    
    return 0;
}

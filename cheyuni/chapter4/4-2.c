/* Exercise 4-2. Extend atof to handle scientific notation of the form 123.45e-6 */
/* where a floating-point number may be followed by e or E and an optionally signed exponent.

   skip this exercise.

 */


#include <stdio.h>

/* atof: convert string s to double */
double atof(char s[]){
    double val, power;
    int i, sign;
    
    for(i = 0; isspace(s[i]); i++) /* skip white space */ ;
    sign = (s[i] == '-') ? -1 : 1;
    if(s[i] == '+' || s[i] == '-')
	i++;
    for(val = 0.0; isdigit(s[i]); i++)
	val = 10.0 * val +(s[i] - '0');
    if(s[i] == '.')
	i++;
    for(power = 1.0; isdigit(s[i]); i++){
	val = 10.0 * val +(s[i] - '0');
	power *= 10;
    }
    return sign * val / power;
}

int main(int argc, char *argv[]){
    char s[100] = "0.00134";

    printf("%f", atof(s));

	

	
    return 0;
}

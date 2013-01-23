#include <stdio.h>
#include <stdlib.h> //for atof()
#include <ctype.h> //for isdigit() 

#define MAXOP 100 /* max size of operand or operator */
#define MAXVAL 100 /* maximum depth of val stack */
#define NUMBER '0' /* signal that a number was found */
#define BUFSIZE 100

int getop(char []);
char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free position in buf */
int sp = 0; /* next free stack position */
double val[MAXVAL]; /* value stack */

void push(double);
double pop(void);
void clear(void); //Exercise 4-4
int getch(void);
void ungetch(int);
    
int main(int argc, char *argv[]){
    int type;
    double op2;
    char s[MAXOP];
    int i;

    
    while((type = getop(s)) != EOF){
    	switch(type) {
    	case NUMBER:
    	    push(atof(s));
    	    break;
    	case '+':
    	    push(pop() + pop());
    	    break;
    	case '*':
    	    push(pop() * pop());
    	    break;
    	case '-':
    	    op2 = pop();
	    push(pop() - op2);
    	    break;
    	case '/': op2 = pop();
    	    if (op2 != 0.0) push(pop() / op2);
    	    else printf("error: zero divisor\n");
    	    break;
    	case '%': //Exercise 4-3
	    op2 = pop();
    	    push((int)pop() % (int)op2);
    	    break;
    	case '\n':
	    printf("top element : %f\n", val[sp]);		    
    	    printf("\t%.8g\n", pop());
    	    break;
    	default:
    	    printf("error: unknown command  kljop-00--%s\n", s);
    	    break;
    	}
    }
    return 0;
}


void push(double f){ /* push: push f onto value stack */
    if(sp < MAXVAL)
	val[sp++] = f;
    else
	printf("error: stack full, can't push %g\n", f);
}

double pop(void){ /* pop: pop and return top value from stack */
    if(sp > 0)
	return val[--sp];
    else
	printf("error: stack empty\n");
}

void clear(void){
    sp == 0;
}

int getop(char s[]){ /* getop: get next character or numeric operand */
    int i, c;
    while((s[0] =                  c = getch()) == ' ' || c == '\t');
    
    s[1] = '\0';
    
    if(!isdigit(c) && c != '.')
	return c;
    
    i = 0;
    if(isdigit(c))
	while(isdigit(s[++i] = c = getch()));
    
    if(c == '.')
	while(isdigit(s[++i] = c = getch()));
    
    s[i] = '\0';
    
    if(c != EOF){
    	ungetch(c);
    }
    return NUMBER;
}

int getch(void){ /* get a (possibly pushed-back) character */
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c){ /* push character back on input */
    if(bufp >= BUFSIZE)
	printf("ungetch: too many characters\n");
    else{
	buf[bufp++] = c;
    }
}

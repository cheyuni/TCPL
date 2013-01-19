#include <stdio.h>
#define MAX 1000
void copy(char [] to, char [] from);
int getline(char [] line, int limit);


int main(int argc, char *argv[])
{
    
    return 0;
}
/* copy: copy ’from’ into ’to’; assume to is big enough */
void copy(char [] to, char [] from){
    int i = 0;
    while(to[i] = from[i])
	++i;
}
/* getline: read a line into s, return length */
int getline(char [] line, int limit){
    int c, i;
    for(i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++){
	s[i] = c;
    }
    if(c == '\n'){
	s[i] = c;
	++i;
    }
    s[i] = '\0';
    return i;
}


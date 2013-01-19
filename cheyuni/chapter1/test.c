#include <stdio.h>
void copy(char to[], char from[]);
int main(int argc, char *argv[])
{

    char hello[1000] = "hello world";
    char empty[1000];
    copy(empty, hello);

    printf("%s", empty);
    
    return 0;
}

void copy(char to[], char from[]){
    int i = 0;
    while(to[i] = from[i])
	i++;
}

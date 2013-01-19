#include <stdio.h>

int main(int argc, char *argv[])
{
    int c;
    c = getchar();
    if(c != EOF){
	printf("wow");
    }else{
	printf("-_-");
    }
    return 0;
}

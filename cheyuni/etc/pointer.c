#include <stdio.h>
int main(int argc, char *argv[])
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int * parr;
    parr = arr;

    printf("%d", (arr+1)-parr);
    return 0;
}

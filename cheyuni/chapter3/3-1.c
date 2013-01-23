/* Exercise 3-1. Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside.) */
/* Write a version with only one test inside the loop and measure the difference in run-time. */
#include <stdio.h>
#include <time.h>


int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while(low <= high){
	mid = (low+high)/2;
	if(x < v[mid])
	    high = mid + 1;
	else if(x > v[mid])
	    low = mid - 1;
	else
	    return mid;
    }
    return -1;
}

int binsearch_ver(int x, int v[], int n){
    int low, high, mid;
    low = 0;
    high = n - 1;
    mid = (low+high) / 2;	    
    while(low <= high && x != v[mid]){
	if(x < v[mid])
	    high = mid + 1;
	else
	    low = mid - 1;

	mid = (low+high) / 2;	    	
    }
    
    return (x == v[mid]) ? (mid) : (-1);
}


int main(int argc, char *argv[]){
    int x = 10, i;
    int v[20];
    for(i = 0; i < 20; i++){
	v[i] = i;
    }
    /* for(i = 0; i < 20; i++){ */
    /* 	printf("%d",v[i]); */
    /* } */

    printf("%d", binsearch_ver(x, v, 20));
    
    
    return 0;
}

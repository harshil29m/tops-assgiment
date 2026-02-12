#include<stdio.h>

int x=10; // global

void add(int y){ // local and formal
	printf("\nTHE ADDITION IS:%d",y);
}

main(){
	add(10+x); // display
}

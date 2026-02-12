#include<stdio.h>

// Local variable.

void local(){
	int x=10;
	printf("\nLOCAL VARIABLE X=%d",x);
}
main(){
	local(); // display function.
}

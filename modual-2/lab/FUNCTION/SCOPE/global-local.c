#include<stdio.h>

int x=10; // global varibale.

void local(){
	printf("\nGLOBAL VARIABLE IN LOCAL X=%d",x); // local variable.
}

main(){
	local(); // display funtion.
}

#include<stdio.h>

main(){
	
	int a,b,c;
	
	printf("\n\tSIMPLE CALCULATOR.");
	printf("\n");
	
	printf("\nENTER THE VALUE OF A:");
	scanf("%d",&a);
	
	printf("\nENTER THE VALUE OF B:");
	scanf("%d",&b);
	
	c = a + b;  // addition.
	
	printf("\nTHE ADDITION IS:%d",c);
	
	c = a - b; // substraction.
	
	printf("\nTHE SUBSTRACTION IS:%d",c);
	
	c = a * b; // multiplication.
	
	printf("\nTHE MULTIPLICATION IS:%d",c);
	
	c = a / b; // division.
	
	printf("\nTHE DIVISION IS:%d",c);
}

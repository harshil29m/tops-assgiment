#include<stdio.h>

main(){
	
	int num;
	
	printf("\n\t POSITIVE NEGATIVE ZERO.");
	printf("\n");
	
	printf("\nENTER THE NUMBER:");
	scanf("%d",&num);
	
	if ( num > 0){
		printf("\nTHE GIVEN NUMBER IS POSITIVE.");
	}
	else if ( num == 0){
		printf("\nTHE GIVEN NUMBER IS ZERO.");
	}
	else{
		printf("\nTHE GIVEN NUMBER IS NEGATIVE.");
	}
}

#include<stdio.h>

main(){
	
	int num;
	
	printf("\n\tEVEN OR ODD.");
	printf("\n");
	
	printf("\nENTER THE NUMBER:");
	scanf("%d",&num);
	
	if ( num % 2 == 0){
		printf("\nTHE GIVEN NUMBER IS EVEN.");
	}
	else{
		printf("\nTHE GIVEN NUMBER IS ODD.");
	}
}

#include<stdio.h>

main(){
	
	int num;
	
	printf("\n\tMULTIPLE OF BOTH 3 AND 5");
	printf("\n");
	
	printf("\nENTER THE NUMBER:");
	scanf("%d",&num);
	
	if ( num % 3 == 0 && num % 5 == 0){
		printf("\nTHE NUMBER IS A MULTIPLE OF BOTH 3 AND 5");
	}
	else{
		printf("\nTHE NUMBER IS NOT A MULTIPLE OF BOTH 3 AND 5");
	}
}

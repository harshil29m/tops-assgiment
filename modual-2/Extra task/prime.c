#include<stdio.h>

main(){
	
	int num,i,prime=1;
	
	printf("\nENTER THE NUMBER:");
	scanf("%d",&num);
	
	if ( num <= 0){
		prime = 0;
	}
	else{
		for ( i = 2; i < num; i++){
			if ( num % i == 0){
				prime = 0;
			}
		}
	}
	if ( prime ){
		printf("\nTHE GIVEN NUMBER IS PRIME.");
	}
	else{
		printf("\nTHE GIVEN NUMBER IS NOT PRIME.");
	}
}

#include<stdio.h>

int factorial(int num){
	int i,fact = 1;
	for(i=1;i<=num;i++){
		fact *= i;
	}
	return fact;
}

main(){
	int num;
	
	printf("\nENTER THE NUMBER:");
	scanf("%d",&num);
	
	if ( num > 0){
		printf("\nFACTORIAL OF %d = %d",num,factorial(num));
	}
}

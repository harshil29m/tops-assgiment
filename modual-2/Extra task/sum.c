#include<stdio.h>

main(){
	
	int num,sum=0;
	
	printf("\nENTER THE NUMBER:");
	scanf("%d",&num);
	
	while ( num > 0){
		sum += num % 10; 
		num /= 10;
	}
	printf("\nTHE SUM OF %d",sum);
}

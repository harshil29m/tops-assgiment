#include<stdio.h>

main(){
	
	int num,i;

	printf("\n\tMULTIPLICATION TABLE.");
		
	printf("\n\nENTER THE NUMBER:");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++){
		
		printf("\n%d x %d : %d",num,i,num*i);
		
	}
	
}

#include<stdio.h>

main(){
	
	int num,i;
	int fact = 1;
	
	printf("\nENTER THE NUMBER:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		
		fact =  fact * i;
		
	}
	printf("\nFACTORIAL:%d",fact);
}

#include<stdio.h>

main(){
	
	int num,i,range;
	
	printf("\nENTER THE NUMBER:");
	scanf("%d",&num);
	
	printf("\nENTER THE RANGE:");
	scanf("%d",&range);
	
	for( i = 1; i <= range; i++){
		printf("\n%dx%d=%d",num,i,num*i);
	}
	
}

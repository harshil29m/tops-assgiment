#include<stdio.h>

main(){
	
	int sum,i,num;
	
		
	for(i=1;i<=5;i++){
		
		printf("\nENTER THE NUMBERS:");
		scanf("%d",&num);
		
		sum = sum + num;
		
	}
	
	printf("\nTHE SUM IS:%d",sum);
	
}

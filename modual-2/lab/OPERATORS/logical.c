#include<stdio.h>

main(){
	
	int a;
	
	printf("\nEnter your marks:");
	scanf("%d",&a);
	
	if( a>=50 && a<=100){
		printf("\nPASS.");
	}
	else{
		printf("\nFAIL.");
	}
}

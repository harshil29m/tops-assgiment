#include<stdio.h>

main(){
	
	int marks;
	
	printf("\nENTER YOUR MARKS:");
	scanf("%d",&marks);
	
	if ( marks >= 30 ){
		
		printf("\nCONGRATULATION YOU CLEAR THE EXAM.");
		
	}
	else{
		
		printf("\nSORRY YOU DIDNOT CLEAR THE EXAM.");
	}
}

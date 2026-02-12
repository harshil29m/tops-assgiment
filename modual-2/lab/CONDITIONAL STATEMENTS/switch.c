#include<stdio.h>

main(){
	
	int choice;
	
	printf("\nPRESS 1 FOR ADDITION.");
	printf("\nPRESS 2 FOR SUBSTRACTION.");
	
	printf("\nENTER YOUR CHOSE:");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
		
			printf("\nADDITION.");
			break;
			
		case 2:
			
			printf("\nSUBSTRACTION.");
			break;
			
		default:
			printf("\nINVALID CHOICE.");
	}
}

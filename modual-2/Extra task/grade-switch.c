#include<stdio.h>

main(){
	
	int marks,grade;
	
	printf("\nENTER YOUR MARKS:");
	scanf("%d",&marks);
	
	if ( marks > 90 ){
		grade = 1;
	}
	else if ( marks > 75){
		grade = 2;
	}
	else if ( marks > 50){
		grade = 3;
	}
	else if ( marks > 30){
		grade = 4;
	}
	else{
		grade = 5;
	}
	
	switch ( grade ){
		case 1:
			printf("\nYOUR GRADE IS A.");
			break;
			
		case 2:
			printf("\nYOUR GRADE IS B.");
			break;
			
		case 3:
			printf("\nYOUR GRADE IS C.");
			break;
			
		case 4:
			printf("\nYOUR GRADE IS D.");
			break;
			
		case 5:
			printf("\nSORRY YOU ARE FAIL.");
	}
}

#include<stdio.h>

main(){
	
	int marks;
	
	printf("\nENTER YOUR MARKS:");
	scanf("%d",&marks);
	
	if ( marks > 90){
		printf("\nYOUR GRADE IS A.");
	}
	else if ( marks > 75){
		printf("\nYOUR GRADE IS B.");
	}
	else if ( marks > 50){
		printf("\nYOUR GRADE IS C.");
	}
	else if ( marks > 30){
		printf("\nYOUR GRADE IS D.");
	}
	else{
		printf("\nSORRY YOU ARE FAIL.");
	}
}

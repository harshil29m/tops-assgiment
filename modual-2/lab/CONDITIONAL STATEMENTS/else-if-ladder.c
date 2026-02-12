#include<stdio.h>

main(){
	
	int marks;
	
	printf("\nENTER YOUR MARKS:");
	scanf("%d",&marks);
	
	if( marks >= 60){
		printf("\nYOUR GRADE IS A.");
	}
	else if( marks >= 50){
		printf("\nYOUR GRADE IS B.");
	}
	else if( marks >= 40){
		printf("\nYOUR GRADE IS C.");
	}
	else{
		printf("\nSORRY YOU CANNOT CLEAR THE EXAM.");
	}
}

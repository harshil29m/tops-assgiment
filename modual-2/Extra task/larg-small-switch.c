#include<stdio.h>

main(){
	
	int a,b,c,largest,smallest;
	
	printf("\nENTER THE VALUE OF A:");
	scanf("%d",&a);
	
	printf("\nENTER THE VALUE OF B:");
	scanf("%d",&b);
	
	printf("\nENTER THE VALUE OF C:");
	scanf("%d",&c);
	
	if ( a > b && a > c){
		largest = 1;
	}
	else if ( b > a && b > c){
		largest = 2;
	}
	else if ( c > b && c > a){
		largest = 3;
	}
	else if ( a < b && a < c){
		smallest = 1;
	}
	else if ( b < a && b < c){
		smallest = 2;
	}
	else{
		smallest = 3;
	}
	
	switch ( largest){
		case 1:
			printf("\nA = %d IS THE LARGEST NUMBER",a);
			break;
			
		case 2:
			printf("\nB = %d IS THE LARGEST NUMBER",b);
			break;
			
		case 3:
			printf("\nC = %d IS THE LARGEST NUMBER",c);
			break;
	}
	switch ( smallest ){
		case 1:
			printf("\nA = %d IS THE SMALLEST NUMBER",a);
			break;
			
		case 2:
			printf("\nB = %d IS THE SMALLEST NUMBER",b);
			break;
		
		case 3:
			printf("\nC = %d IS THE SMALLEST NUMBER",c);
			break;
	}
	
}

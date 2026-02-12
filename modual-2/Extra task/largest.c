#include<stdio.h>

main(){
	
	int a,b,c;
	
	printf("\nENTER THE VALUE OF A:");
	scanf("%d",&a);
	
	printf("\nENTER THE VALUE OF B:");
	scanf("%d",&b);
	
	printf("\nENTER THE VALUE OF C:");
	scanf("%d",&c);
	
	if ( a > b && a > c){
		printf("\nA = %d IS THE LARGEST NUMBER",a);
	}
	else if ( b > a && b > c){
		printf("\nB = %d IS THE LARGEST NUMBER",b);
	}
	else{
		printf("\nC = %d IS THE LARGEST NUMBER",c);
	}
}

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
		largest = a;
	}
	else if ( b > a && b > c){
		largest = b;
	}
	else if ( c > b && c > a){
		largest = c;
	}
	else if ( a < b && a < c){
		smallest = a;
	}
	else if ( b < a && b < c){
		smallest = b;
	}
	else{
		smallest = c;
	}
	printf("\nTHE LARGEST NUMBER IS : %d",largest);
	printf("\nTHE SMALLEST NUMBER IS : %d",smallest);
}

#include<stdio.h>

main()
{
	int a,b;
	
	printf("\nEnter the two numbers:");
	scanf("%d%d",&a,&b);
	
	if(a>b){
		printf("a is greater than b.");
	}
	else{
		printf("a is not grater than b.");
	}
}

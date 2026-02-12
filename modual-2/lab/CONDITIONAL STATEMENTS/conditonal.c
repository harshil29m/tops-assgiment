#include<stdio.h>

main(){
	
	int a,b,c;
	
	printf("\nENTER THE VALUE OF A AND B:");
	scanf("%d%d",&a,&b);
	
	c = (a>b) ? a : b;
	
	printf("GRATER VALUE IS=%d",c);
	
}

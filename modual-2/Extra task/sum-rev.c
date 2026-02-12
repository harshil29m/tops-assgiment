#include<stdio.h>

main(){
	
	int num,reverse = 0;
	
	printf("\nENTER THE NUMBER:");
	scanf("%d",&num);
	
	while(num){
		reverse = reverse * 10 + num % 10;
		num /= 10;
	}
	printf("\nREVERSE=%d",reverse);
}

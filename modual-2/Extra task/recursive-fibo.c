#include<stdio.h>

int a=0,b=1,next;

int fibo(int num){

	if ( num == 0 ){
		return 1;
	}
	printf("%d",a);
	next = a+b;
	a=b;
	b=next;
	fibo(num-1);
	
}

main(){
	int num;
	printf("\nENTER THE NUMBER:");
	scanf("%d",&num);
	fibo(num);
}

#include<stdio.h>

main(){
	
	int num[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("\nENTER THE ARRAY:");
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++){
		printf("\nNUM[%d]",num[i]);
	}
}

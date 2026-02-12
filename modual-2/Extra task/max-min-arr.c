#include<stdio.h>

main(){
	
	int arr[10],i,min,max;
	
	for( i = 0; i < 10; i++){
		printf("\nENTER THE 10 NUMBER:");
		scanf("%d",&arr[i]);
	}
	max = min = arr[0];
	for ( i = 0; i < 10; i++){
		if ( arr[i] > max){
			max = arr[i];
		}
		if ( arr[i] < min){
			min = arr[i];
		}
	}
	printf("\nMAX = [%d]",max);
	printf("\nMIN = [%d]",min);
}

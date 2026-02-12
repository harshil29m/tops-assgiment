#include<stdio.h>

main(){
	
	int num,i,arr[100];
	int sum=0;
	float avg;
	
	printf("\nENTER THE NUMBER:");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		printf("\nENTER THE ARRAY:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<num;i++){
		sum += arr[i];
	}
	avg = (float) sum / num;
	
	printf("\nSUM=%d",sum);
	printf("\nAVG=%f",avg);
}

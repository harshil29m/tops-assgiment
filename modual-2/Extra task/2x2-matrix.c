#include<stdio.h>

main(){
	
	int arr[2][2];
	int i,j;
	
	for( i = 0; i < 2; i++){
		for( j = 0; j < 2; j++){
			printf("\nENTER THE VALUE:");
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n 2x2 MATRIX IS:\n");
	for ( i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("[%d]",arr[i][j]);
		}
		printf("\n");
	}
}

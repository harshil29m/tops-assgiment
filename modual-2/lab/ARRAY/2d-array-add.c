#include<stdio.h>

main(){
	
	int x[2][2],y[2][2],sum[2][2];
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nENTER THE VALUE OF X AND Y:");
			scanf("%d%d",&x[i][j],&y[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j] = x[i][j] + y[i][j];
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("X[%d][%d] + Y[%d][%d]= [%d]",x[i][j],y[i][j],sum[i][j]);
		}
		printf("\n");
	}
}

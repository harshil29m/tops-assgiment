#include <stdio.h>

int main() {
    int a[3][3], b[3][3], c[3][3]={0}, i, j, k;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        	printf("\nENTER THE FIRST MATRIX:");
            scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        	printf("\nENTER THE SECOND MATRIX:");
            scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                c[i][j] += a[i][k] * b[k][j];
			}
		}
	}		
    printf("Result:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
}

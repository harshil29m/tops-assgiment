#include <stdio.h>

int fact(int n) {
    if (n == 0 || n == 1){
        return 1;
    }
    return n * fact(n - 1);
	
}


int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

main() {
    int n, i, j, k;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

       
        for (k = 0; k < n - i - 1; k++){
		
            printf("  ");
		}
       
        for (j = 0; j <= i; j++){
		
            printf("%4d", nCr(i, j));
		}
        printf("\n");
    }

}


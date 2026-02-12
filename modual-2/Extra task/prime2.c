#include<stdio.h>

main(){
	
	int num,i,j,prime;
	
	printf("\nENTER THE NUMBER:");
	scanf("%d",&num);
	
	for ( i=2; i<=num; i++){
		prime = 1;
		for(j=2;j<i;j++){
			if ( i % j == 0){
			prime=0;
		}
		}
		if( prime == 1){
			printf("\nTHE PRIME NUMBER IS : %d",i);
		}
	}
}

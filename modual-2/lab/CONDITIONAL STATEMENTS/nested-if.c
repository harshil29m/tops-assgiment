#include<stdio.h>

main(){
	
	int age;
	char country = 'i';
	
	printf("\nENTER YOUR AGE:");
	scanf("%d",&age);
	
	printf("\nENTER YOUR FIRST WORD OF COUNTRY NAME:");
	scanf("%d",&country);
	
	if( age >= 18){
		if( country == 'i'){
			printf("\nYOU ARE ELIGIBLE FOR VOTING.");
		}
	}
	else{
		printf("\nSORRY YOU ARE NOT ELIGIBLE FOR VOTING.");
	}
}

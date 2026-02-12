#include<stdio.h>
#include<string.h>

main(){
	
	char name[20]={'H','A','R','S','H','I','L'};
	char second_name[20];
	
	printf("\nENTER YOUR SECOND NAME:");
	scanf("%s",&second_name);
	
	strcpy(second_name,name);
	
	printf("\nCOPY STRING IS:%s",second_name);
	
}

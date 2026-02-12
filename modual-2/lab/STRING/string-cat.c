#include<stdio.h>
#include<string.h>

main(){
	
	char name[20];
	char second_name[20];
	
	printf("\nENTER YOUR NAME:");
	scanf("%s",&name);
	
	printf("\nENTER YOUR SECOND NAME:");
	scanf("%s",&second_name);
	
	strcat(name,second_name);
	
	printf("\nMY NAME IS:%s",name);
}

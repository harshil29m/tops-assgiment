#include<stdio.h>

main(){
	
	int a,b;
	char op;
	
	printf("\n\tCALCULATOR");
	printf("\n");
	
	printf("\nENTER THE VALUE OF A:");
	scanf("%d",&a);
	
	printf("\nENTER THE OPERATOR (+,-,*,/,%%):");
	scanf(" %c", &op);
	
	printf("\nENTER THE VALUE OF B:");
	scanf("%d",&b);
	
	if( op == '+'){
		printf("\nADDITION IS:%d", a+b);
	}
	else if ( op == '-'){
		printf("\nSUBSTRACTION IS:%d", a-b);
	}
	else if ( op == '*'){
		printf("\nMULTIPLICATION IS:%d", a*b);
	}
	else if ( op == '/'){
		printf("\nDIVISION IS:%d", a/b);
	}
	else if ( op == '%'){
		printf("\nRIMINDER IS:%d", a%b);
	}
	else{
		printf("\nINVALID OPERATOR, PLEASE CHOOSE CURRECT OPERATOR.");
	}
}

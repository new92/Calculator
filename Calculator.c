#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>


void GetName() {
	char name[20];
	printf("Please enter your name: ");
	gets(name);
	scanf("%s",&name);
}

void Add() {
	int firstnum;
	int secondnum;
	int result;
	printf("Please enter the first number: ");
	scanf("%d",&firstnum); 
	printf("\nPlease enter the second number: ");
	scanf("%d",&secondnum);
	result=firstnum+secondnum;
	printf("\nThe result of the addition between %d and %d is: %d",firstnum,secondnum,result);
}

void Sub() {
	int firstnum;
	int secondnum;
	int result;
	printf("Please enter the first number: ");
	scanf("%d",&firstnum);
	print("\nPlease enter the second number: ");
	scanf("%d",&secondnum);
	result=firstnum-secondnum;
	printf("\nThe result of the substraction between %d and %d is: %d",firstnum,secondnum,result);
}

void Multi() {
	int firstnum;
	int secondnum;
	int result;
	printf("Please enter the first number: ");
	scanf("%d",&firstnum);
	print("\nPlease enter the second number: ");
	scanf("%d",&secondnum);
	result=firstnum*secondnum;
	printf("\nThe result of the multiplication between %d and %d is: %d",firstnum,secondnum,result);
}

void Div() {
	double finum;
	double secnum;
	double DivResult;
	printf("Please enter the first number: ");
	scanf("%f",&finum);
	print("\nPlease enter the second number: ");
	scanf("%f",&secnum);
	DivResult=finum/secnum;
	printf("\nThe result of the substraction between %f and %f is: %f",finum,secnum,DivResult);
}

void Pow() {
	int num;
	int result;
	printf("Please enter the integer number: ");
	scanf("%d",&num);
	result = num*num;
	printf("\nThe result of the power of the number %d is this: %d",num,result);
}
int main() {
	char name[100];
	int calc;
	
	GetName();
	printf("Hello %s and welcome to this calculator program !",name);
	printf("[1] : Addition");
	printf("[2] : Substraction");
	printf("[3] : Multiplication");
	printf("[4] : Division");
	printf("[5] : Pow");
	printf("Please enter the number of the calculation you want to make: ");
	scanf("%d",&calc);
	while(calc < 1 || calc > 5) {
		printf("Invalid calculation ! Please enter again: ");
		scanf("%d",&calc);
	}
	switch(calc) {
		case 1:
			Add();
			break;
		case 2:
			Sub();
			break;
		case 3:
			Multi();
			break;
		case 4:
			Div();
			break;
		case 5:
			Pow();
			break;
		default:
			printf("Number Not Found !");
	}
	return 0;
}

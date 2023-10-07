#include<stdio.h>

int main(){
	float a;	
	float b;
	float c;
	float discriminant;
	printf("You have a Quadratic Equation: ax^2 + bx + c = 0\n");
	printf("Enter values of the quotients a, b and c\n\n");
	printf("Enter values of a: \n");
	scanf("%d",&a);
	
	printf("Enter values of b: \n");
	scanf("%d",&b);
	
	printf("Enter values of c: \n");
	scanf("%d",&c);
	
	discriminant = (b*b) - 4*a*c; 
	
	if(discriminant < 0){
		printf("There is NO real solution for this equation.");
	}
	else if(discriminant == 0){
		printf("There is ONE real solution for this equation.");
	}
	else if(discriminant > 0){
		printf("There are TWO real solutions for this equation.");
	}
	else{
		printf("Enter valid data");
	}
	
	return 0;
}

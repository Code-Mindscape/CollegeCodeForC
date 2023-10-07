#include<stdio.h>

int main(){
	int firstNumber;	
	int secondNumber;
	int thirdNumber;
	
	printf("Enter first number: \n");
	scanf("%d",&firstNumber);
	
	printf("Enter second number: \n");
	scanf("%d",&secondNumber);
	
	printf("Enter third number: \n");
	scanf("%d",&thirdNumber);

	if((thirdNumber > firstNumber && firstNumber > secondNumber) || (thirdNumber < firstNumber && firstNumber < secondNumber)){
	printf("%d is middle of these numbers",firstNumber);
	}
	else if((thirdNumber > secondNumber && secondNumber > firstNumber) || (thirdNumber < secondNumber && secondNumber < firstNumber)){
	printf("%d is middle of these numbers",secondNumber);
	}
	else if((firstNumber > thirdNumber && thirdNumber > firstNumber) || (firstNumber < thirdNumber && thirdNumber < firstNumber)){
	printf("%d is middle of these numbers",thirdNumber);
	}
	else{
		printf("Enter valid data");
	}
	return 0;
	
}

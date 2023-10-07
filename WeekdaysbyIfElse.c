#include<stdio.h>
int main(){
	
	int userInput;
	
	printf("1 = Monday, 2 = Tuesday, 3 = Wednesday, 4 = Thursday, 5 = Friday, 6 = Saturday, 7 = Sunday\n\n");
	printf("Enter a number (1-7): \n");
	scanf("%d",&userInput);
	
	if(userInput == 1){
		printf("Monday");
	}
	else if(userInput == 2){
		printf("Tuesday");
	}
	else if(userInput == 3){
		printf("Wednesday");
	}
	else if(userInput == 4){
		printf("Thursday");
	}
	else if(userInput == 5){
		printf("Friday");
	}
	else if(userInput == 6){
		printf("Saturday");
	}
	else if(userInput == 7){
		printf("Sunday");
	}
	else{
		printf("Please! enter number (1-7)");
	}
	return 0;
}


#include<stdio.h>

int main(){
	int userDateOfBirth;	
	int currentYear;
	int userCurrentAge;
	
	printf("Enter Your DOB year here: \n");
	scanf("%d",&userDateOfBirth);
	
	printf("Enter current year here: \n");
	scanf("%d",&currentYear);
	
	userCurrentAge =  currentYear - userDateOfBirth;
	
	if(userCurrentAge >= 18 && userCurrentAge <= 28){
		
	printf("Your age is %d. \n",userCurrentAge);
	printf("You are eligible for this job.\n");	
	}
	else{
		printf("Your age is %d. \n",userCurrentAge);
		printf("You are NOT eligible for this job.\n");	
	}

	return 0;
}

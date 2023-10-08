#include<stdio.h>

int main(){
	float fistHalf;
	float totalTime;
	float secondHalf;

	printf("Enter first half your race in seconds:\n");
	scanf("%f",&fistHalf);
	
		
	printf("Enter total time for race in secons\n");
	scanf("%f",&totalTime);
	
	secondHalf = totalTime - fistHalf;
	
	if(fistHalf < secondHalf){
		printf("There is not a NEGATIVE split.\n");
	}
	else if(secondHalf < fistHalf){
		printf("NEGATIVE split.");
	}
	else{
		printf("Enter valid data.");
	}

	return 0;
	

}

#include<stdio.h>
int main(){
	
	int Air = 1;
	int Water = 2;
	int Steel = 3;
	int userSelect;
	float distance;
	float timeTaken;
	float timeTakenInMinutes;
	float speedOfSound;
	
	printf("Choose one option: \n");
	printf("1. Air\n");
	printf("2. Water\n");
	printf("3. Steel\n");
	
	scanf("%d", &userSelect);
	
	
	if(userSelect == Air || userSelect == Water || userSelect == Steel){
		
		printf("Enter distance in feets\n");
		scanf("%f", &distance);
	
		if(userSelect == Air){
		speedOfSound = 1100;
		timeTaken = distance / speedOfSound;	
		timeTakenInMinutes = timeTaken/60;
		printf("Time taken : %.4f seconds\n",timeTaken);
		printf("Time taken : %.2f minutes\n",timeTakenInMinutes);
	    }
	    else if(userSelect == Water){
		speedOfSound = 4900;
		timeTaken = distance / speedOfSound;	
		timeTakenInMinutes = timeTaken/(60*60);
		printf("Time taken : %.4f seconds\n",timeTaken);
	    }
	    else if(userSelect == Steel){
		speedOfSound = 16400;
		timeTaken = distance / speedOfSound;	
		timeTakenInMinutes = timeTaken/(60*60);
		printf("Time taken : %.4f seconds\n",timeTaken);
	    }
	    else if(userSelect < 0){
	    printf("Enter distance greater than 0\n");	
		}
		else{
	    printf("Enter valid data");		
		}
	    
	}
	else{
		printf("Choose only given options\n");
	}
}

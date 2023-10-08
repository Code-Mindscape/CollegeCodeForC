#include<stdio.h>
int main(){
	
	int carbonDioxide = 1;
	int Air = 2;
	int Helium = 3;
	int Hydrogen = 4;
	
	int userSelect;
	float time;
	float speedOfSound;
	float distanceTraveled;
	
	printf("Choose one option: \n");
	printf("1. CarbonDioxide\n");
	printf("2. Air\n");
	printf("3. Helium\n");
	printf("3. Hydrogen\n");
	scanf("%d", &userSelect);
	
	
	if(userSelect == carbonDioxide  || userSelect == Air || userSelect == Helium || userSelect == Hydrogen){
		
		printf("Enter time in seconds\n");
		scanf("%f", &time);
	
		if(time > 0 && time < 30){
			
	    	if(userSelect == carbonDioxide){
			speedOfSound = 258.0;
			distanceTraveled =  time*speedOfSound;	
			printf("Distance : %.4f meters.\n",distanceTraveled);
			
		    }
		    else if(userSelect == Air){
				
			speedOfSound = 331.5;
			distanceTraveled =  time*speedOfSound;	
			printf("Distance : %.4f meters.\n",distanceTraveled);
			
		    }
		    else if(userSelect == Helium){	
		    
			speedOfSound = 972.0;
			distanceTraveled =  time*speedOfSound;	
			printf("Distance : %.4f meters.\n",distanceTraveled);
			
		    }
		    else if(userSelect == Hydrogen){	
		    
			speedOfSound = 1270.0;
			distanceTraveled =  time*speedOfSound;	
			printf("Distance : %.4f meters.\n",distanceTraveled);
			
		    }
			else{
		    printf("Enter valid data");		
			}
	    
		}
		
	else{
		printf("**Enter time greater than 0 and less than 30**\n");	
	}
		
	}
	else{
		printf("Choose only given options\n");
	}
}

#include<stdio.h>

int main(){
	int memAge;
	int memActivities;
	float reduction;
	float memShipFee;
	
	printf("Enter your age: \n");
	scanf("%d",&memAge);

	printf("Enter number of activites in your previous year: \n");
	scanf("%d",&memActivities);
	
	
	if(memAge <= 6){
		reduction = memActivities * 0.75;
		memShipFee = 5 - reduction;
		printf("Your membership fee is: %.3f Dollars.\n",memShipFee);
	}
	else if(memAge >= 7 && memAge <= 12){
		reduction = memActivities * 1.25;
		memShipFee = 10 - reduction;
		printf("Your membership fee is: %.3f Dollars.\n",memShipFee);
	}
	else if(memAge >= 13 && memAge <= 18){
		reduction = memActivities * 2;
		memShipFee = 15 - reduction;
		printf("Your membership fee is: %.3f Dollars.\n",memShipFee);
	}
	else if(memAge > 18){
		reduction = memActivities * 2;
		memShipFee = 25 - reduction;
		printf("Your membership fee is: %.3f Dollars.\n",memShipFee);
	}
	else{
		printf("Enter valid data.");
	}
	
	return 0;
	

}

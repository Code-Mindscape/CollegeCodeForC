#include<stdio.h>

int main(){
	float packageWeight;
	float distanceInMiles;
	float ChargePerMile;
	float totalCost;
	
	printf("Enter weight of your package:\n");
	scanf("%f",&packageWeight);
	
		
	printf("Enter the distance in miles:\n");
	scanf("%f",&distanceInMiles);
	

	if(packageWeight > 0 && distanceInMiles > 10 && distanceInMiles < 3000){
		
	if(packageWeight <= 2 && packageWeight > 0){
		ChargePerMile = 1.10/500 ;
		totalCost = ChargePerMile*distanceInMiles;
		printf("The cost to ship %.2fkg weigth through %.2f miles is %.2f Dollars",packageWeight,distanceInMiles,totalCost);
	}
	else if(packageWeight > 2 && packageWeight <= 6){
		ChargePerMile = 2.20/500 ;
		totalCost = ChargePerMile*distanceInMiles;
		printf("The cost to ship %.2fkg weigth through %.2f miles is %.2f Dollars",packageWeight,distanceInMiles,totalCost);
	}
	else if(packageWeight > 10 && packageWeight <= 20){
		ChargePerMile = 4.80/500 ;
		totalCost = ChargePerMile*distanceInMiles;
		printf("The cost to ship %.2f kg weigth through %.2f miles is %.2f Dollars",packageWeight,distanceInMiles,totalCost);
	}
	else {
		printf("Enter valid data.\n");
	}
}
	
	else{
		printf("Enter 1kg to 20kg only.\n");
		printf("Enter 1 to 3000 miles only");
	}
	
	return 0;
	

}

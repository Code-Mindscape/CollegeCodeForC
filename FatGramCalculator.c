#include<stdio.h>

int main(){
	float totalCalories;
	float fatGrams;
	float fatCalories;
	float fatCaloriesRate;
	float _30percnetofTotal;
	
	printf("Enter total Calories in food:\n");
	scanf("%f",&totalCalories);
		
	printf("Enter fat grams in food:\n");
	scanf("%f",&fatGrams);
	
	_30percnetofTotal = totalCalories * 30 / 100;
	fatCalories = 9 * fatGrams;
	fatCaloriesRate = fatCalories / totalCalories;
	
	
	if(fatGrams >= 0 && totalCalories >= 0 && totalCalories > fatCalories){
		
		printf("Calories in fat grams is %.2f\n",fatCalories);
		printf("Calories percentage in fat grams is %.2f\n",fatCaloriesRate);
		
		if(fatCalories < _30percnetofTotal){
		printf("Food is low in fat\n");
	}
	else if(fatCalories > _30percnetofTotal){
		printf("Food is full of fat\n");
	}
}
	
	else{
		printf("Fat calories should not be greater than total calories.");
}

	return 0;
	

}

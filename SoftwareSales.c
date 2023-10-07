#include<stdio.h>

int main(){
	int packagePrice = 99; 	
	int Quantity;
	float salesPrice;
	float discount;
	float priceAfterDiscount;
	
	printf("Enter packages quantity: \n");
	scanf("%d",&Quantity);
	
	if(Quantity >= 10 && Quantity <= 19){
	salesPrice = Quantity * packagePrice;
	discount = salesPrice* 20 / 100;
	priceAfterDiscount = salesPrice-discount;
	printf("Total cost: %.3f\n",priceAfterDiscount);
	}
	else if(Quantity >= 20 && Quantity <= 49){	
	salesPrice = Quantity * packagePrice;
	discount = salesPrice * 30 / 100;
	priceAfterDiscount = salesPrice - discount;
	printf("Total cost: %.3f\n",priceAfterDiscount);
	
	}
	else if(Quantity >= 50 && Quantity <= 99){	
	salesPrice = Quantity * packagePrice;
	discount = salesPrice * 40 / 100;
	priceAfterDiscount = salesPrice - discount;
	printf("Total cost: %.3f\n",priceAfterDiscount);
	
	}
	else if(Quantity >=100){	
	salesPrice = Quantity * packagePrice;
	discount = salesPrice * 50 / 100;
	priceAfterDiscount = salesPrice - discount;
	printf("Total cost: %.3f\n",priceAfterDiscount);
	
	}
	else{
		printf("Enter valid data.");
	}
	
	return 0;
	

}

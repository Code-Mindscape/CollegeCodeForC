#include<stdio.h>

int main(){
	int purchasedBooks;
	
	printf("Enter the number of books you purchased in this month: \n");
	scanf("%d",&purchasedBooks);
	
	if(purchasedBooks == 0){
	printf("You earn 0 points\n");
	}
	else if(purchasedBooks == 1){
		printf("You earn 5 points\n");	
	}
	else if(purchasedBooks == 2){	
		printf("You earn 15 points\n");
	}
	else if(purchasedBooks == 3){	
		printf("You earn 30 points\n");
	}
	else if(purchasedBooks >= 4){	
		printf("You earn 60 points\n");
	}
	else{
		printf("Enter valid data.");
	}
	
	return 0;
	

}

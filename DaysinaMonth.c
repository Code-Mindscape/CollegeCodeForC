#include<stdio.h>

int main(){
	int monthByUser;	
	int Year;
	
	printf("Enter month: \n");
	scanf("%d",&monthByUser);
	
	if(monthByUser == 2){
			
	printf("Enter year: \n");
	scanf("%d",&Year);
		
	if(Year/100 == 0 && Year/400 == 0){	
	printf("Number of days: 29");
	}
	else if(Year/400 == 0 || Year/4 == 0 ){
		
	printf("Number of days: 29");
	}
	else{
		printf("This is not a leap year");
	}
}
	else{
		printf("Leap year is only for february");
	}
	return 0;
	

}

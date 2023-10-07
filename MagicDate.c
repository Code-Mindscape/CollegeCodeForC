#include<stdio.h>

int main(){
	int month;	
	int day;
	int year	
	
	printf("Enter month\n");
	scanf("%d",&month);
	
	printf("Enter day\n");
	scanf("%d",&day);
	
	printf("Enter year\n");
	scanf("%d",&year);
	
	if(month*day == year){
		printf("Magic date");
	}
	else{
		printf("This is not a magic date");
	}
	
	return 0;
}

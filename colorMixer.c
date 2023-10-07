#include<stdio.h>

int main(){
	char red[5] = "red";	
	char blue[5] = "blue";
	char yellow[6] = "yellow";
	
	char userFirstColor[6];
	char userSecondColor[6];	
	
	printf("Enter first color: \n");
	scanf("%s",userFirstColor);
	
	printf("Enter second color: \n");
	scanf("%s",userSecondColor);

	if(strcmp(userFirstColor,red) == 0 && strcmp(userSecondColor,blue) == 0 || strcmp(userFirstColor,blue) == 0 && strcmp(userSecondColor,red) == 0){
	printf("\nPURPLE");
	}
	else if(strcmp(userFirstColor,red) == 0 && strcmp(userSecondColor,yellow) == 0 || strcmp(userFirstColor,yellow) == 0 && strcmp(userSecondColor,red) == 0){
	printf("\nORANGE");
	}
	else if(strcmp(userFirstColor,blue) == 0 && strcmp(userSecondColor,yellow) == 0 || strcmp(userFirstColor,yellow) == 0 && strcmp(userSecondColor,blue) == 0){
	printf("\nGREEN");
	}
	else{
		printf("Enter only Red, Blue and Yellow");
	}
	return 0;
	
}

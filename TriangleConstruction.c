#include<stdio.h>
#include<math.h>

int main(){
	float firstSide;	
	float secondSide;
	float thirdSide;
	float s;
	float Area;
	printf("Enter first side: \n");
	scanf("%f",&firstSide);
	
	printf("Enter second side: \n");
	scanf("%f",&secondSide);
	
	printf("Enter third side: \n");
	scanf("%f",&thirdSide);
	
	
	if(firstSide + secondSide > thirdSide || firstSide + thirdSide > secondSide || secondSide + thirdSide > firstSide ){
	
	printf("It can be construct a triangle\n");
	
	s = (firstSide + secondSide + thirdSide)/2;
	
	Area = s*((s - firstSide)*(s - secondSide)*(s - thirdSide));
	
	Area = sqrt(Area);
					
	printf("Area of triangle is: %lf",Area);

	}
	
	else if(firstSide + secondSide == thirdSide || firstSide + thirdSide == secondSide || secondSide + thirdSide == firstSide ){
		printf("It cann\'t construct a triangle\n");
	}
	
	else if(firstSide + secondSide < thirdSide || firstSide + thirdSide < secondSide || secondSide + thirdSide < firstSide ){
		printf("It cann\'t construct a triangle\n");
	}
	
	else{
		printf("Enter valid data.");
	}
	
	return 0;
}

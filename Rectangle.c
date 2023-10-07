#include<stdio.h>

int main(){
	int length1;	
	int width1;
	
	int length2;	
	int width2;
	int rec1 ,rec2;	
	
	printf("Enter length1\n");
	scanf("%d",&length1);
	
	printf("Enter width1\n");
	scanf("%d",&width1);
	
	printf("Enter length2\n");
	scanf("%d",&length2);
	
	printf("Enter width2\n");
	scanf("%d",&width2);	
	rec1=length1*width1;
	rec2=length2*width2; 
	
	if(rec1>rec2)
	printf("rec1 is greater");
	
	else if(rec2>rec1)
	printf("rec2 is greater");
	
	else if(rec2==rec1)
	printf("Both have equal area");
	
	else{
	printf("8");	
	}
	return 0;
}

#include<stdio.h>

int main(){
	int rollNo;
	
	printf("Enter Roll number(1-10)\n");
	scanf("%d",&rollNo);

	switch(rollNo){
		case 1 : printf("Name: Usman\n");printf("Marks: 76\n");printf("PASS");
		break;
		case 2 : printf("Name: Ali\n");printf("Marks: 79\n");printf("PASS");;
		break;
		case 3 : printf("Name: Sajad\n");printf("Marks: 20\n");printf("FAIL");
		break;
		case 4 : printf("Name: Maryam\n");printf("Marks: 50\n");printf("PASS");
		break;
		case 5 : printf("Name: Iqra\n");printf("Marks: 49\n");printf("PASS");
		break;
		case 6 : printf("Name: Sara\n");printf("Marks: 20\n");printf("FAIL");
		break;
		case 7 : printf("Name: Babar\n");printf("Marks: 54\n");printf("PASS");
		break;
		case 8 : printf("Name: Afzal\n");printf("Marks: 89\n");printf("PASS");
		break;
		case 9 : printf("Name: Shakeel\n");printf("Marks: 19\n");printf("FAIL");
		break;
		case 10 : printf("Name: Owais\n");printf("Marks: 70\n");printf("PASS");
		break;
		default : printf("Not Found.");
	}
	return 0;
}

#include<stdio.h>

int main(){
	char yes[3] = "yes"; 	
	char No[3] = "no";
	char userInput[3];
	
	printf("Reboot the computer and try to connect.\n\n");
	printf("Did that fix the problem?\n");	
	scanf("%s",userInput);
	
	if(strcmp(userInput,yes) == 0){
		printf("Cool!!\n");
	}
	else if(strcmp(userInput,No) == 0){
			printf("Reboot the router and try to connect.\n\n");
			printf("Did that fix the problem?\n");	
			scanf("%s",userInput);
				if(strcmp(userInput,yes) == 0){
					printf("Cool!!\n");
				}
				else if(strcmp(userInput,No) == 0){
					printf("Make sure the cables between the router and modem are plugged in firmly.\n\n");
					printf("Did that fix the problem?\n");	
					scanf("%s",userInput);
						if(strcmp(userInput,yes) == 0){
							printf("Cool!!\n");
					}
						else if(strcmp(userInput,No) == 0){
							printf("Move the router to a new location and try to connect.\n\n");
							printf("Did that fix the problem?\n");	
							scanf("%s",userInput);
								if(strcmp(userInput,yes) == 0){
							       printf("Cool!!\n");
								}				
						        else if(strcmp(userInput,No) == 0){
							       printf("Please! Get a new router.\n\n");	
								}
								else{
									printf("Retry!\n");
					   			}
					}
						else{
							printf("Retry!\n");
					}
				}
				else{
					printf("Retry!\n");
				}
	}
	else{
		printf("Retry!\n");
	}

	return 0;
}

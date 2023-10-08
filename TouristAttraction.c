#include <stdio.h>

int main() {
    int adultsTicket = 1; 
    int stdTicket = 2;
    int familyTicket = 3;
    int childs;
    int persons;
    int tickets;
    float extraCharges;
    float discountRate;
    float totalCost;
    int userSelect;
    
    
    printf("Choose one option\n");
    printf("1. Adults Ticket cost: 30$ per person. 10 percent discount for at least 5 persons.\n");
    printf("2. Students Ticket cost: 25$ per person.\n");
    printf("3. Family Ticket cost: 75$. for 2 Adults and 2 or more childs. extra 15$ will be charged for more than 2 childs.8\n");
    
    scanf("%d",&userSelect);

    if(userSelect == adultsTicket || userSelect == stdTicket || userSelect == familyTicket){
    	if(userSelect == adultsTicket){
    		printf("Enter number of persons.\n");
    		scanf("%d",&persons);
    			if(persons >= 5){
    				totalCost = persons*30;
    				discountRate = totalCost * 30/100;
    				totalCost = persons*30 - discountRate;
    				printf("Total cost is: %f\n",totalCost);
				}
				else{
    				totalCost = persons*30;
    				printf("Total cost is: %.2f\n",totalCost);
				}
		
		}
		else if(userSelect == stdTicket){
			
    		printf("Enter number of tickets.\n");
    		scanf("%d",&tickets);
    		totalCost = tickets*25;
    		printf("Total cost is: %.2f\n",totalCost);
    		
		}
		else if(userSelect == familyTicket){
    		printf("Enter number of childs in your family more than 2.\n");
    		scanf("%d",&childs);
    		extraCharges = childs * 15;
    		totalCost = 75 + extraCharges;
    		printf("Total cost is: %.2f\n",totalCost);
		}
		else{
				printf("Enter valid data.\n");
		}
    		
	}
    else{
    	printf("Please select given options only.\n");
	}
    
    
    
    return 0;
}


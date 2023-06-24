#include <stdio.h>
int main(){
	int a,b,c,d,pizza,burger,FrenchFries,Sandwich,quantity;
	char choice;
	printf("May I Have Your Order Sir :] \n");
	printf("============================\n");
	printf("P - Pizza \nB - Burger  \nS - Sandwich \nF - French Fries");
	printf("\n============================\nselect your order sir : ");
	scanf("%c",&choice);
	switch(choice){
		case 'P':
			printf("Pizza\nPlease Enter The Quantity : ");
			scanf("%d",&quantity);
			pizza = quantity * 400;
			printf("You Have To Pay %d Sir ",pizza);
			break;
		case 'B':
			printf("Burger\nPlease Enter The Quantity : ");
			scanf("%d",&quantity);
			burger = quantity * 200;
			printf("You Have To Pay %d Sir ",burger);
			break;
		case 'F':
			printf("FrenchFries\nPlease Enter The Quantity : ");
			scanf("%d",&quantity);
			FrenchFries = quantity * 80;
			printf("You Have To Pay %d Sir ",FrenchFries);
			break;
		case 'S':
			printf("Sandwich\nPlease Enter The Quantity : ");
			scanf("%d",&quantity);
			Sandwich = quantity * 150;
			printf("You Have To Pay %d Sir ",Sandwich);
			break;
	}
	return 0;
}

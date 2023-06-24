#include <stdio.h>
int main(){
	char a;
	int qty,total;
	printf("<--- Menu Is Here Anish Sir ---> ");
	printf("\nB = Burger");
	printf("\nF = French Fries");
	printf("\nC = Crunchy Fried Chicken");
	printf("\nM = MoMo");
	printf("\nP = Pizza");
	printf("\n<--- Enter Your Choice : --->");
	scanf("%c",&a);
	switch(a){
		case 'B':
			printf("You Have Selected Burger");
			printf("\nEnter The Quantity : ");
			scanf("%d",qty);
			total = qty*150;
			printf("Rs%d Is Your Total Cost Anish Sir");
		default:
			printf("error");
	}
}

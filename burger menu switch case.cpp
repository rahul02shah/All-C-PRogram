#include <stdio.h>
int menu(){
	char input;
	printf(" May I Have Your Order Sir :]\n");
	printf("==============================\n");
	printf("B - Burger \nF - French Fries \nP - Pizza \nS - Sandwich");
	scanf("%d",input);
	return input;
}
int main(){
	int check;
	check = menu();
	switch(check){
		case 'B':
			
	}
}

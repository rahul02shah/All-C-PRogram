#include <stdio.h>
#include <stdlib.h>

void withdraw(int cash,int balance){
	balance=balance-cash;
	printf("%d amount withdrawl is successfull\n",cash);
	printf("Your Remaining Balance Is %d",balance);
}
int main(){
	int a,b,pin=9898,cash,balance=25000,oldpin,newpin,deposit;
	printf("Welcome To Nabil Bank ATM\n");
	printf("=========================\n");
	printf("Enter Your Pin : ");
	scanf("%d",&b);
	oldpin=pin;
	if(b==pin){
		printf("1 = Balance Enquiry \n2 = Fast Cash \n3 = Change pin \n4 = Deposit \n5 = Exit\n")	;
		printf("-----------------------\nEnter Your Choice : ");
		scanf("%d",&a);
		switch(a){
			case 1:
				printf("Your Balance Is : %d",balance);
				break;
			case 2:
				printf("Enter The Amount You Want To Withdraw : ");
				scanf("%d",&cash);
				withdraw(cash,balance);
				break;
			case 3:
				printf("Enter Your Old Pin : ");
				if(oldpin=pin){
					printf("Enter Your New Pin");
					scanf("%d",&newpin);
					pin = newpin;
				}
				else {
					printf	("pin not matched :) ");
				}
				break;
			case 4:
				printf("Enter The Amount You Want To Deposit : ");
				scanf("%d",&deposit);
				balance = balance + deposit;
				printf("Your New Balance IS : %d",balance);
				break;
			case 5:
				exit(1);
				printf("Exiting......");
				break;
		}
	}
	else{
		printf("Pin Is Incorrect");
	}
	return 0;
}

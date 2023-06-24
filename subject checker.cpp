#include <stdio.h>
int main ()
{
	float Maths,English,Programming,ComputerNetworking,IFA;
	float percentage;
	printf("Enter The marks of Maths : ");
	scanf ("%f",&Maths);
	printf("Enter The marks of English : ");
	scanf("%f",&English);
	printf("Enter The marks of C Programming : ");
	scanf("%f",&Programming);
	printf("Enter The marks of  Computer Networking : ");
	scanf("%f",&ComputerNetworking);
	printf("enter the marks of IFA : ");
	scanf("%f",&IFA);
	total=Maths+English+Programming+ComputerNetworking+IFA;
	printf("Total Marks You have scored is : %.2f\n",total);
	percentage=(total/500)*100;
	printf("Percentage You Scored Is %.2f\n",percentage);
	if (percentage<=30){
		printf ("You Failed Buddy");
	}
	else if (percentage<=50){
		printf("You Have Scored C Grade");
	}
	else if (percentage<=65){
		printf("You Have Scored C+ Grade");
	}
	else if (percentage<=70){
		printf("You Have Scored B Grade");
	}
	else if (percentage<=80){
		printf("You have scored B+ Grade");
	}
	else if (percentage<=90){
		printf("You Have Scored A Grade");
	}
	else {
		printf("You Have Scored A+ Grade");
	}
	return 0;
}

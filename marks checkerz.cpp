#include <stdio.h>
int main ()
{
	float math,nepali,science,english,eph,total;
	float percentage;
	printf("Enter The Marks Of Math: ");
	scanf("%f",&math);
	printf("Enter The Marks of nepali: ");
	scanf("%f",&nepali);
	printf("Enter The Marks Of science: ");
	scanf("%f",&science);
	printf("Enter The Marks Of english: ");
	scanf("%f",&english);
	printf("Enter The Marks Of eph: ");
	scanf("%f",&eph);
	total=math+nepali+science+english+nepali;
	printf("The Total Is : %.2f \n",total);
		percentage=(total/500)*100;
	printf("Your percentage is : %.2f \n",percentage);
	if (percentage<=40){
		printf("You Failed Buddy");
	}
	else if (percentage<=50){
	printf("You Scored C Grade");
	}
	else if (percentage<=60){
		printf("You Scored C+ Grade");
	}
	else if (percentage<=70){
		printf("You Scored B Grade");
	}
	else if (percentage<=80){
		printf("You Scored B+ Grade");
	}
	else if (percentage<=90){
		printf("You Scored A Grade");
	}
	else {
		printf("You Scored A+ Grade");
	}
	return 0; 
}

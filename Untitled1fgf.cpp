#include <stdio.h>
int main()
{
	int a;
	printf("Enter Your age : ");
	scanf("%d",&a);
	switch (a){
		case (a>0 && a<=12):
			printf("You Are Child");
			break;
		case a>12 && a<=18:
			printf("You Are Teenager");
			break;
		case a>18 && a<=25:
			printf("You Are Adult");
			break;
		case a>25 && a<=40:
			printf("You Are a Person");
			break;
		case a>40 && a<80:
			printf("Ready To Expire");
			break;
		default :
		printf("Case Undefined");
	}
	return 0;
}

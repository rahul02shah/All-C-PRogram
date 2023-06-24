#include <stdio.h>
int main ()
{
	char a;
	int b,c;
	printf("Enter the mathmatical operation symbol : ");
	scanf("%c",&a);
	printf("Enter The 1st Number : ");
	scanf("%d",&b);
	printf("Enter The 2nd Number : ");
	scanf("%d",&c);
	switch (a){
		case '+':
			 printf("Addition Of Two Number is %d+%d=%d",b,c,b+c);
			break;
		case '-':
			printf("Subtraction Of Two Number is %d-%d=%d",b,c,b-c);
			break;
		case '/':
			printf("Division of Two Number is %d/%d=%d",b,c,b/c);
			break;
		case '*':
			printf("Multiple Of Two Number is %d*%d=%d",b,c,b*c);
			break;
		default:
			printf("Case Undefined");
	}
	return 0;
}

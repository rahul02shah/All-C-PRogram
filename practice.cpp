#include <stdio.h>
int main()
{
	char a,j;
	int h;
	float b,c,d,e,f,g,k,l,m,o,p,n,r,z;
	printf("Enter The Symbol For Calculaton : ");
	scanf("%c",&a);
	printf("Enter first number : ");
	scanf("%f",&b);
	printf("Enter second number : ");
	scanf("%f",&c);
	switch (a){
		case '+':
			d=c+b;
			printf("The sum is : %.2f + %.2f = %.2f",b,c,d);
			break;
		case '-':
			e=c-b;
			printf("The sub is : %.2f - %.2f = %.2f ",b,c,e);
			break;
		case '*':
			f=c*b;
			printf("The multiple is : %.2f * %.2f = %.2f ",b,c,f);
			break;
		case'/':
			g=b/c;
			printf("The division is : %.2f / %.2f = %.2f ",b,c,g);
			break;
		default:
			printf("Case Undefined \n");
	}
	
	printf("\nWanna do more calculation with recent output ( 1 For Yes, 0 For No) : ");
	scanf("%d", &h);
	// for yes and no
	switch (h){
	case 1:
		printf("Being Ready For Next Operation.......");
		break;
	case 0:
		printf("Quitting.....");
		break;
	default:
		printf("Undefined");
	}
	
	
printf ("\nEnter The symbol for calculation : ");
scanf("%c",f);
switch (a){
		case '+':
			printf("The sum is : %.2f + %.2f = %.2f",d,m,d+m);
			break;
		case '-':
			printf("The sub is : %.2f - %.2f = %.2f ",e,o,e-o);
			break;
		case '*':
			printf("The multiple is : %.2f * %.2f = %.2f ",f,p,f*p);
			break;
		case'/':
			printf("The division is : %.2f / %.2f = %.2f ",g,r,g/r);
			break;
		default:
			printf("Case Undefined \n");
	}
	return 0;
}

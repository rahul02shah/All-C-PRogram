#include <stdio.h>
int main ()
{
	char a;
	printf("Enter Variable For Weeked : ");
	scanf("%c",&a);
	switch (a){
		case 'a' :
			printf("sunday");
			break ;
		case 'b':
			printf("monday");
			break;
		case 'c':
			printf("tuesday");
			break;
		case 'd':
			printf("wednesday");
			break;
		case 'e':
			printf("thursday");
			break;
		case 'f':
			printf("friday");
			break;
		case 'g':
			printf("saturday");
			break;
		default : 
		printf("case not matched");
	}
return 0;
}

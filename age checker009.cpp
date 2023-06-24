#include <stdio.h>
int main()
{
	int a;
	printf("enter your age : ");
	scanf ("%d",&a);
	if (a<18){
		printf("You are child");
	}
	else if (a<20){
		printf ("You are Teenager");
	}
	else if (a<30){ printf ("You are adult");
	}
	else { printf ("You are person");
	}
	return 0;
}

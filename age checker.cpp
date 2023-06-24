#include <stdio.h>
int main ()
{
	int a;
	printf ("Enter Your Age Sir : ");
	scanf ("%d",&a);
	if (a<=14){
		printf ("You are child");
	}
	else if (a<18){
		printf ("You are teenager ");
	}
	else if (a<=20){
		printf ("you are adult");
	}
	else {
		printf ("You are a person");
	}
	return 0;
}

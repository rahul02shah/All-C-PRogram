#include <stdio.h>
int main(){
	float i,j;
	int c,d;
	printf("Enter Any Two Number : ");
	scanf("%d%d",&i,&j);
	if (i/3!=0 && j/3!=0){
		printf("Sum Is %f+%f=%f",i,j,i+j);
	}
	else {
		c = (int)i;
		d = (int)j;
		printf("Sum is %d+%d=%d",c,d,c+d);
	}
	return 0;
}

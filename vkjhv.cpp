#include <stdio.h>
int main(){
	float i,j;
	int c,d,sum=0;
	printf("Enter Any Two Number : ");
	scanf("%f%f",&i,&j);
	if (i%2!=0 && j%2!=0){
		printf("Sum Is %f+%f=%f",i,j,i+j);
	}
//	else {
//		c = (int)i;
//		d = (int)j;
//		printf("Sum is %d+%d=%d",c,d,c+d);
//	}
	return 0;
}

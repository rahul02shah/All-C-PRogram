#include <stdio.h>
#include<math.h>
int main(){
	float i,j;
//	int c,d;
	printf("Enter Any Two Number : ");
	scanf("%f%f",&i,&j);
	
	float ans1 = remainder(i,1);
	float ans2 = remainder(j,1);
	if(ans1 != 0 && ans2 != 0) {
	 	printf("Sum Is %f+%f=%f",i,j,i+j);
		}
		else {
			printf("Sum Is %d+%d=%d",i,j,i+j);

//		printf(" Is %d-%f=%f",i,j,i-j);
//		printf(" Is %f*%f=%f",i,j,i*j);
//		printf(" Is %f/%f=%f",i,j,i/j);
}	
	return 0;
}

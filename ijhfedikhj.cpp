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
	 	printf("Sum Is %.2f+%.2f=%.2f\n",i,j,i+j);
	 	printf("Sub Is %.2f-%.2f=%.2f\n",i,j,i-j);
	 	printf("Div Is %.2f/%.2f=%.2f\n",i,j,i/j);
	 	printf("Mul Is %.2f*%.2f=%.2f\n",i,j,i*j);
		}
	else if(ans1 !=0 && ans2==0){
		float m = i;
		int x ;
		x = (int)j;
		printf("Sum Is %.2f+%d=%.2f\n",m,x,m+x);
	 	printf("Sub Is %.2f-%d=%.2f\n",m,x,m-x);
	 	printf("Div Is %.2f/%d=%.2f\n",m,x,m/x);
	 	printf("Mul Is %.2f*%d=%.2f\n",m,x,m*x);
	}
	else if(ans1==0 && ans2!=0){
		 float n = j;
		int y;
		y= (int)i;
		printf("Sum Is %.2f+%d=%.2f\n",n,y,n+y);
	 	printf("Sub Is %.2f-%d=%.2f\n",n,y,n-y);
	 	printf("Div Is %.2f/%d=%.2f\n",n,y,n-y);
	 	printf("Mul Is %.2f*%d=%.2f\n",n,y,n-y);
	}
		else {
			int a,b;
			a = (int)i;
			b = (int)j;
			printf("Sum Is %d+%d=%d\n",a,b,a+b);
			printf("Mul Is %d*%d=%d\n",a,b,a*b);
			printf("Div Is %d/%d=%d\n",a,b,a/b);
			printf("Sub Is %d-%d=%d\n",a,b,a-b);
}	
	return 0;
}

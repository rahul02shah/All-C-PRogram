#include <stdio.h>
int main(){
	int a,sum=0;
	printf("Enter ANy Number : ");
	scanf("%d",&a);
	while (a!=0){
		sum=a*a+sum;
		a--;
	}
	printf("%d",sum);
}

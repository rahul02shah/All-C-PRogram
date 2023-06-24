#include <stdio.h>
int main ()
{
	int a,sum;
	int arr[10];
	for(a=0;a<=9;a++){
		printf("Enter Any Number : ");
		scanf("%d",&arr[a]);
		sum=sum+arr[a];
	}
	printf("Total is : %d",sum);
	return 0;
}

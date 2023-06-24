#include <stdio.h>
int main(){
	int a,sum=0;
	printf("Enter The Range To find Sum Of even number : ");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if (i%2==0){
			sum = sum + i;
		}
	}
	printf("%d",sum);
}

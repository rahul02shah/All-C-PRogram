#include <stdio.h>
#include <math.h>
int main(){
	int a,count;
	printf("Enter The Number : ");
	scanf("%d",&a);
	count = log10(a)+1;
	printf("%d",count);
}

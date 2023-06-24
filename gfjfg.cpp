#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int n;
	char stng[10];
	printf("Enter The Number : ");
	scanf("%d",&n);
	itoa (n,stng,10);
	char reversed[10];
	strcpy(strrev(stng),reversed);
	y = atoi(reversed);
	printf("%d",y);
	if (n==y){
		printf("%d is palindrome",n);
	}
	return 0;
}

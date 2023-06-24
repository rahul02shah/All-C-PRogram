#include <stdio.h>
int main(){
	int a;
	int reverse = 0;
	int remainder;
	printf("Enter The Number : ");
	scanf("%d",&a);
	int orginal = a;
	while(a!=0){
	     remainder = a%10;
		reverse = reverse*10+remainder;
		a = a/10;
	}
	if (orginal=reverse){
		printf("palindrome ");
	}
	else {
	    printf("not palindrome");
	}
}

#include <stdio.h>
int main(){
	int n,remainder,reverse=0,orginal;
	printf("Enter The Number : ");
	scanf("%d",&n);
	orginal = n;
	while(n!=0){
		remainder = n%10;
		reverse = reverse*10+remainder;
		n= n/10;
	}
	if (orginal == reverse){
		printf("%d is palindrome",orginal);
	}
	else {
		printf("%d is not palindrome",orginal);
	}
	return 0;
}

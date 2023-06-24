#include <stdio.h>
int main (){
	int n,i=0,rem,a;
	printf("Enter any number : ");
	scanf("%d",&n);
	a=n;
	while (n!=0){
		rem=n%10;
		i=i*10+rem;
		n=n/10;
	}
	if(i==a){
		printf("%d is palindrome",a);
	}
	else {
		printf("Not");
	}
	return 0 ;
}

//#include <stdio.h>
//
//int main() {
//
//  int n, reverse = 0, remainder;
//
//  printf("Enter an integer: ");
//  scanf("%d", &n);
//
//  while (n != 0) {
//    remainder = n % 10;
//    reverse = reverse * 10 + remainder;
//    n /= 10;
//  }
//
//  printf("Reversed number = %d", reverse);
//
//  return 0;
//}

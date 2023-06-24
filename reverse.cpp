#include <stdio.h>
int reverse(long int x){
	int remainder,reverse = 0;
	while (x != 0) {
    remainder = x % 10;
    reverse = reverse * 10 + remainder;
    x /= 10;
  }
  return reverse;
}
int main(){
	long int a;
	printf("Enter Any Number : ");
	scanf("%ld",&a);
	printf("%d",reverse (a));
	return 0;
}

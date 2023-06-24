#include <stdio.h>
int main(){
	 char a;
	 printf("enter any alphabet : ");
	 scanf("%c",&a);
	 if ((a>='a' && a<='z')){
	 	printf("%c is lowercase",a);
	 }
	 else if((a>='A' && a<='z')){
	 	printf("%c is number uppercase",a);
	 }
	 else {
	 	printf("%c is undefined",a);
	 }
	 return 0;
}

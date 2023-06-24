#include <stdio.h>
int main(){
	char a;
	printf("Enter any Number alphabet  or special character : ");
	scanf("%c",&a);
	if ( (a>='a' && a<='z') || (a>='A' && a<='z')){
		printf("This is character");
	}
	else if (a>='0' && a<='9'){
		printf("This Is Digit");
	}
	else {
		printf("This is special character");
	}
	return 0;
}

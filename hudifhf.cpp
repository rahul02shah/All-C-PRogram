#include <stdio.h>
#include <string.h>
int main(){
	char name[10],reverse[10];
	printf("Enter The Name : ");
	scanf("%s",&name);
	if(name == strrev(name)){
		printf("%s Is palindrome");
	}
	else {
		printf("%s is not palindrome");
	}
}

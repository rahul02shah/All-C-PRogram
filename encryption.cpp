#include <stdio.h>
#include <string.h>
void Encrypt(char str[10]){
	 for(int i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 3;
}
int main(){
	char str[] = {"Rahul"};
	char Match[] = {"Udkxo"};
	Encrypt(str);
	printf("%s",str);
//	if(strcmp(str, Match)==0){
//		printf("Access Granted :)");
//	}
}

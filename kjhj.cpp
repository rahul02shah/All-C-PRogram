#include <stdio.h>
int main(){
	char a[10];
	FILE *ptr;
	ptr = fopen("mydatas.txt","r");
	printf("Enter The Message You Wanna Save To Your File : ");
	
	fscanf(ptr,"%s",a);
	printf("%s",a);
	fclose(ptr);
}

#include <stdio.h>
int main (){
	int a;
	char b[5];
	FILE *ptr;
	ptr = fopen ("myroute.txt","w");
	printf("Enter a salary: ");
	scanf("%d",&a);
	printf("Enter Your Name : ");
	scanf("%s",&b);
	fprintf(ptr,"%d=%s",a,b);
	fclose (ptr);
	return 0;
}

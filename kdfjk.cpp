#include <stdio.h>
int main()
{
	char a[25];
	char b[15];
	int c;
	FILE *py;
	py = fopen ("myroute1.txt","w");
	printf("Enter Your Name : ");
	scanf("%s",&a);
	printf("Address : ");
	scanf("%s",&b);
	printf("Phone No :");
	scanf("%d",&c);
	fprintf(py,"Name = %s \n Address = %s \n Phone = %d",a,b,c);
	fclose(py);
	return 0;
}

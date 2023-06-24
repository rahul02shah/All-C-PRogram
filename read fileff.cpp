#include <stdio.h>
int main ()
{
	FILE *ptr;
	int b=1;
	char a[150];
	ptr = fopen("myroute.txt","r");
	fscanf(ptr,"%s",a);
	printf("%s",a);
	fclose(ptr);
	return 0;
}


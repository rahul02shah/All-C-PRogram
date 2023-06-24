#include <stdio.h>
int main(){
	FILE *ju;
	char a[100];
	ju = fopen ("myroute1.txt","r");
	while (	fgets(a,100,ju)){
		printf("%s",a);
	}
	fclose (ju);
	return 0;
}

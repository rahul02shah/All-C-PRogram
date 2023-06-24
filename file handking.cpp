#include <stdio.h>
int main (){
	char a[5];
	int b;
	FILE *fp;
	fp=fopen ("mydata.txt","w");
	printf("Ener Name : ");
	scanf("%s",&a);
	printf("your age :");
	scanf("%d",&b);
	fprintf(fp,"%s=%d",a,b);
	fclose(fp);
	return 0;
}

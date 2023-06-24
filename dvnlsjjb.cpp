#include <stdio.h>
int main(){
	char a[120];
	FILE *pt;
	pt= fopen("myroute.txt","r");
	while(	fgets(a,120,pt)){
		printf("%s",a);
}
//puts(a);
	fclose(pt);
	return 0;
}

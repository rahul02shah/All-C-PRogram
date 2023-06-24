#include <stdio.h>
int main(){
	char a[120];
	FILE *pt;
	pt= fopen("mydatas.txt","r");
	fgets(a,120,pt);
	printf("%s",a);
//puts(a);
	fclose(pt);
	return 0;
}

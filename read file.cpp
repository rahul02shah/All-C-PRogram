#include <stdio.h>
int main(){
	FILE *gh;
	gh=fopen("mydata.txt","r");
	fclose(gh);
}

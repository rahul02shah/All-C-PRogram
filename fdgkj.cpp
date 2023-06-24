#include <stdio.h>
#include <stdlib.h>
void write();
void read();
struct employees{
	int id;
	char name[25];
	char address[50];
};
void write(){
	FILE *wt;
	struct employees av;
	wt = fopen("myroute2.txt","w");
	printf("Enter Employees Id : ");
	scanf("%d",&av.id);
	printf("Enter Employees Name : ");
	scanf("%s",&av.name);
	printf("Address : ");
	scanf("%s",&av.address);
	fprintf(wt,"Name : %s \nId : %d \nAddress : %s",av.name,av.id,av.address);
	fclose (wt);
}
void read (){
	char x[150];
	FILE *rd;
	rd = fopen ("myroute2.txt","r");
	while (	fgets(x,150,rd)){
	printf("%s",x);
	}
}
int ram(){
		printf("Read = 1 && Write = 0  && 3 for Exit :  ");
		int a;
		scanf("%d",&a);
}
int main(){
	int a;
	a = ram();
	if (a==0){
		write();
	}
	else if(a==1) {
		read();
	}
	else if (a==3){
		printf("Exiting .....");
		exit (0);
	}
	else {
		ram ();
	}
	return 0;
}

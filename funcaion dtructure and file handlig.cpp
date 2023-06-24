#include <stdio.h> 
#include <stdlib.h>
void write();
void read();
int ram();
struct employees{
	int id;
	char name[25];
	char address[50];
};
void write(){
	FILE *wt;
	struct employees av;
	wt = fopen("myroute2.txt","a");
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
		int a;
		printf("Read = 1 && Write = 0 && Exit = 3 :  ");
		scanf("%d",&a);
	    return a;
	}
	
int main(){
	int a;
	a = ram ();
	if (a==0){
		write();
	}
	else if(a==1) {
		read();
	}
	else if(a==3){
		printf("program is exiting....");
		exit(0);
	}
	else {
		ram();
	}
	return 0;
}

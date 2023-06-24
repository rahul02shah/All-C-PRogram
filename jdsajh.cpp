#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void write();
void read();
int ram ();
struct employees{
	int id;
	char name[25];
	char address[50];
};
void write(){
	FILE *wt;
	char temp[150];
	struct employees av;
	
	wt = fopen("myroute2.txt","a");
	printf("Enter Employees Id : ");
	scanf("%d",&av.id);
	printf("Enter Employees Name : ");
	scanf("%s",&av.name);
	printf("Address : ");
	scanf("%s",&av.address);
//	fputs(wt,"Name : %s \tId : %d \tAddress : %s",av.name,av.id,av.address);

	char idtemp[10];
	itoa(av.id, idtemp,10);
	strcat(temp, "ID: ");
	strcat(temp,idtemp);
	strcat(temp, "\tName: ");
	strcat(temp,av.name);
	strcat(temp,"\tAddress: ");
	strcat(temp,av.address);
	strcat(temp, "\n");
	
	fputs(temp, wt);
//	fprintf(wt,temp);
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
		printf("Read = 1 && Write = 0 && Exit = 3 :  ");
		int a;
		scanf("%d",&a);
		return a;
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
		printf("Exiting....");
		exit (0);
	}
	else {
	    ram ();
	}
	return 0;
}

#include <stdio.h>
struct data{
	int id;
	char name[20];
	char address[25];
};
int main(){
	struct data o;
	printf("ENter Your id: ");
	scanf("%d",&o.id);
	printf("Enter Your Name: ");
	scanf("%s",&o.name);
	printf("Enter Your Address : ");
	scanf("%s",&o.address);
	printf("id=%d , name = %s and address = %s",o.id,o.name,o.address);
	return 0;
}

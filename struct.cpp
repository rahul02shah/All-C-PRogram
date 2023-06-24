#include <stdio.h>
struct student {
	int id;
	char name[20];
	float marks;
};
int main(){
	struct student s;
	printf("enter id = ");
	scanf("%d",&s.id);
	printf("enter your name : ");
	scanf("%s",&s.name);
	printf("enter your marks :");
	scanf("%.2f",&s.marks);
	printf("%d , %s ,%.2f",s.id,s.name,s.marks);
	return 0;
}																																				

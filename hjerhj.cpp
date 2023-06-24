#include <Stdio.h>
struct employee {
	int emp_salary;
	int emp_id;
	char emp_name[20];
};
int main(){
	FILE *ptr;
	ptr=fopen("Emp.dat","w");
	struct employee obj[10];
	printf("Enter The 10 Employees Name,Id and Salary : ");
	for(int i=0;i<2;i++){
		scanf("%s",&obj[i].emp_name);
		scanf("%d",&obj[i].emp_id);
		scanf("%d",&obj[i].emp_salary);
	}
	
	fwrite(&obj, sizeof(obj), 1, ptr);
//	
//	for (int j=0;j<10;j++){
//		fprintf(ptr,"%s",obj[i].emp_name);
//		fprintf(ptr,"%d",obj[i].emp_id);
//		fprintf(ptr,"%d",obj[i].emp_salary);
//	}
//	for (int j=0;j<10;j++){
//		if (obj.emp_salary[1]>obj.emp_salary[i]){
//			obj.emp_salary[1]=obj.emp_salary;
//		}
//	}
}

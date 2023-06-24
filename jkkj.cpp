#include <stdio.h>
union student{
	int a;
	char b;
};
int main(){
	union student s;
	sizeof(union student);
	return 0;
}

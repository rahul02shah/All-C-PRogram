#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char country[25];
	int n;
	cout<<"Enter Country Name : ";
	cin>>country;
	n = strlen(country);
	cout<<"Total Digit Is : "<<n;
	return 0;
}

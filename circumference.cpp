#include <iostream>
using namespace std;
void area(int y);
void perimeter(int x);
int main(){
	int a,b,c;
	cout<<"Enter Radius : ";
	cin>>a;
	area(a);
	perimeter(a);
}
void area(int y){
	int pi = 22/7;
	int area = pi*y*y;
	cout<<"Area is : "<<area<<endl;
}

void perimeter(int x){
	int pi = 22/7;
	int perimeter = 2*pi*x;
	cout<<"Perimeter Is : "<<perimeter;
}

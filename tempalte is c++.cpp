#include <iostream>
using namespace std;
template <class changer, class maggy>
// changer is a generic variable
void test( changer a, maggy b){
	maggy c= a+b;
	cout<<"Sum is : "<<c<<endl;
}
int main(){
	test(20,30.99);
	test(20.22,30.33);
	return 0;
}

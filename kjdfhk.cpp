#include <iostream>
using namespace std;
template <class changer>
void test( changer a, changer b){
//	changer c= a+b;
	cout<<"Sum is : "<<a<<b<<endl;
}
int main(){
	test(20,30);
	test(20.22,30.33);
	test("hello","world");
	return 0;
}

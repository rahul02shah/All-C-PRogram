// constructor function is non return type function, only public cases are used. Same function name as class.
//  no need to call the function, it could be called automatically just by linking on main function.
#include <iostream>
using namespace std;
class test{
	public:
		test(int x){
			cout<<"The number is : "<<x<<endl;
			cout<<"Hello world"<<endl;
		}
	void fun(){
		cout<<"Hello RAhul"<<endl;
	}
};
int main(){
	test obj (35);
	obj.fun();
}

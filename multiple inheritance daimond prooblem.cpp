#include <iostream>
using namespace std;
class test {
	public :
		void fun (){
			cout<<"Hello From Test"<<endl;
		}
};
class test1 : virtual public test {
	public : 
		void fun1(){
			cout<<"Hello From Test1"<<endl;
		}
};
class test2: virtual public test {
	public :
		void fun2(){
			cout<<"Hello From Test2"<<endl;
		}
};
class test3 : public test1 , public test2 {
	public:
		void fun3(){
			cout<<"Hello From Test3"<<endl;
		}
		
};
int main(){
	test3 obj;
	obj.fun2();
	obj.fun();
}

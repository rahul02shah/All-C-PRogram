#include <iostream>
using namespace std;
 class test{
	 	private :
	 		int a;
	 		
	 	public :
	 		void bdata(int v){
	 			a=v;
			 }
		void print(){
			cout<<"The number is : "<<a;
		}
	 };
int main(){
	int b;
	test obj;
	cout<<"Enter Any Number : ";
	cin>>b;
	obj.bdata(b);
	obj.print();
	return 0;
}

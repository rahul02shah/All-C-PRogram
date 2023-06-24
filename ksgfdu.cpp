#include <iostream>
using namespace std;
class test{
	private :
		int id;
		string name;
	public:
		void tmc(int x, string y){
			id = x;
			name = y;
		}
		void printf(){
			
			cout<<"Id is "<<id<<endl;
			cout<<"Name is "<<name<<endl;
			
		}
};
class testy{
	private :
		string address;
		public :
			void add(string z){
				address = z;
				cout<<"address is"<<address<<endl;
			}
};
int main(){
	test obj;
	testy objy;
	int a ;
	string b ,c ;
	cout<<"Enter Id : ";
	cin>>a;
	cout<<"Enter Your Name : ";
	cin>>b;
	cout<<"Enter A Address : ";
	cin>>c;
	objy.add(c);
	obj.tmc(a,b);
	obj.printf();
}

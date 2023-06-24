#include <iostream>
using namespace std;
class employee{
	private:
		int a;
		string b;
	public:
		void ram(int x,string y){
			a=x;
			b=y;
			
		}
		void printdata(){
			cout<<a;
			cout<<b;
		}
};
int main(){
	employee obj;
	int x;
	string y;
	cout<<"Enter The Number : ";
	cin>>x;
	cout<<"Enter Your Name : ";
	cin>>y;
	obj.ram(x,y);
	obj.printdata();
}

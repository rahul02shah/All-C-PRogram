#include <iostream>
using namespace std;
class empdata{
	protected:
	int empid;
	string empname;
	string departmentname;
	
};
class empinfo:public empdata{
	public:
		void setempinfo(){
			cout<<"Enter Employee id: "<<endl;
			cin>>empid;
			cout<<"Enter Employee Name : "<<endl;
			cin>>empname;
		}
};
class empdepart:public empdata{
	public:
		
		void setprint(){
			
			cout<<"Enter Department:"<<endl;
			cin>>departmentname;
			cout<<empid;
			cout<<empname;
			cout<<departmentname;
		}
		
};
int main(){
	empdepart obj;
	empinfo objj;
	objj.setempinfo();
	obj.setprint();
	return 0;
}

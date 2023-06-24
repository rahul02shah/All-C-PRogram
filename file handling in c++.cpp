#include <iostream>
#include <fstream>
using namespace std;
class student {
	public:
	int id;
	string name;
	int classm;
};
int main(){
	student obj[4];
	ofstream file ("myfile.txt");
	for (int i=0;i<5;i++){
 	cout<<"Enter Student Id : ";
	cin>>obj[i].id;
	cout<<"Enter Student Name :  ";
	cin>>obj[i].name;
	cout<<"Enter The Class : ";
	cin>>obj[i].classm;
	}
	for (int j=0;j<5;j++){
		file<<"ID : "<<obj[j].id<<endl<<"Name Is : "<<obj[j].name<<endl<<"Class is : "<<obj[j].classm<<endl;
	}
	file.close();
}

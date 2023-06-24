#include <iostream>
using namespace std;
int menu (){
	int a;
	cout<<"May I Have Your Order Sir : "<<endl;
	cout<<"==========================="<<endl;
	cout<<"1 - Pizza \n2 - Burger \n3 - French Fries \n4 - Sandwich"<<endl;
	cout<<"==========================="<<endl;
	cout<<"Select Your Order : ";
	cin>>a;
	return a;
}
int cart(int newitem){
	int total = 0;
	total = total + newitem;
	cout<<"Your Total Is : "<<total;
}
int main(){
	int burger,pizza,FrenchFries,Sandwich,choice,quantity;
	choice = menu ();
	switch(choice){
		case 1 :
			printf("Pizza\nPlease Enter The Quantity : ");
			scanf("%d",&quantity);
			pizza = quantity * 400;
			cart(pizza);
			break;
		case 2 :
			printf("Burger\nPlease Enter The Quantity : ");
			scanf("%d",&quantity);
			burger = quantity * 200;
			cart(burger);
			break;
		case 3 :
			printf("FrenchFries\nPlease Enter The Quantity : ");
			scanf("%d",&quantity);
			FrenchFries = quantity * 80;
			cart(FrenchFries);
			break;
		case 4 :
			printf("Sandwich\nPlease Enter The Quantity : ");
			scanf("%d",&quantity);
			Sandwich = quantity * 150;
			cart(Sandwich);
			break;
	}
	return 0;
}

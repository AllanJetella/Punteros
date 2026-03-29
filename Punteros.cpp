#include<iostream>
using namespace std;

main(){

	int edad=5,*p_edad;
	p_edad= &edad;
	
	cout<<"Variable edad:"<<edad<<endl;
	cout<<"Puntero Edad:"<<*p_edad<<endl;
	
	cout<<"------cambiar valores------"<<endl;
	*p_edad = 40;
	
	cout<<"variable edad:"<<edad<<endl;
	cout<<"puntero edad:"<<*p_edad<<endl;

	cout<<"Nueva variable a p_edad valores"<<endl;
	int edad2 =100;
	p_edad=&edad2;
	edad=400;
	cout<<"Variable edad:"<<edad<<endl;
	cout<<"Puntero Edad:"<<*p_edad<<endl;
	cout<<"Puntero Edad2:"<<edad2<<endl;

	system("PAUSE");

}

#include "Coustomer.h"
#include<iostream>
#include<string>
#include"Address.h"
using namespace std;
Coustomer::Coustomer(){
	
}
Coustomer::Coustomer(string n, string e, string p, string g, string ph, string bn, string ac) {
	this->name = n;
	this->email = e;
	this->password = p;
	this->gender = g;
	this->phone_no = ph;
	this->Bank_name = bn;
	this->Account_no = ac;
}
void Coustomer::Display() {
	if (this->name == "")
	{
		cout << endl;
		cout << "\t\t\t\tRegiter Your SelF As A Coustomer" << endl;
	}
	else {
		cout << "\t\t\t\t****************************************" << endl;
		cout << "\t\t\t\t          Basic Info OF Coustomer       " << endl;
		cout << "\t\t\t\t****************************************" << endl;
		cout << "\t\t\t\t------------------------------------------" << endl;
		cout << "\t\t\t\t Coustomer Name:" << this->name << endl;
		cout << "\t\t\t\t Coustomer Email: " << this->email << endl;
		cout << "\t\t\t\t Coustomer Password:" << this->password << endl;
		cout << "\t\t\t\t Coustomer Gender:" << this->gender << endl;
		cout << "\t\t\t\t Coustomer Phone no:" << this->phone_no << endl;
		cout << "\t\t\t\t Coustomer Bank Name:" << this->Bank_name << endl;
		cout << "\t\t\t\t Coustomer Bank Account Number:" << this->Account_no << endl;
		cout << "\t\t\t\t------------------------------------------" << endl;
	}
}

Coustomer::~Coustomer() {

}
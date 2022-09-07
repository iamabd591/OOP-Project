#include "User.h"
User::User()
{
	this->name="";
	this->email = "";
	this->password = "";
	this->gender = "";
	this->phone_no = "";
	this->Bank_name = "";
	this->Account_no = "";
}
User::User(string bn, string ac, string n, string e, string p, string g, string ph, Address* Details){
	this->name = n;
	this->email = e;
	this->password = p;
	this->gender = g;
	this->phone_no = ph;
	this->Bank_name = bn;
	this->Account_no = ac;
	this->Details = Details;
}
	//setter///
	void User::setname(string n) {
		this->name = n;
	}
	void User::setemail(string e) {
		this->email = e;
	}
	void User::setpassword(string p) {
		this->password = p;
	}
	void User::setgender(string g) {
		this->gender = g;
	}
	void User::setphone_no(string ph) {
		this->phone_no = ph;
	}
	void User::setBank_name(string bn) {
		this->Bank_name = bn;
	}
	void User::setAccount_no(string ac) {
		this->Account_no = ac;
	}

	//Getter//
string User::getname()const {
	return this->name;
}
string User::getemail()const {
	return this->email;
}
string User::getpassword()const {
	return this->password;
}
string User::getgender()const {
	return this->gender;
}
string User::getphone_no()const {
	return this->phone_no;
}
string User::getBank_name()const {
	return this->Bank_name;
}
string User::getAccount_no()const {
	return this->Account_no;
}
string User::getAdressDetails() {
	Details->getAddressInfo();
	return getAdressDetails();
}
User::~User() {
	if (Details!=nullptr)
	{
		delete[] Details;
	}
}


#pragma once
#include<iostream>
#include<string>
#include"Address.h"
using namespace std;
class User
{
protected:
	string name;
	string email;
	string password;
	string gender;
	string phone_no;
	string Bank_name;
	string Account_no;
	Address *Details; //Aggregation with Addresss Class //

public:
	User();
	User(string bn, string ac, string n, string e, string p, string g, string ph,Address *Details);
	///setter///
	void setname(string n);
	void setemail(string e);
	void setpassword(string p);
	void setgender(string g);
	void setphone_no(string ph);
	void setBank_name(string bn);
	void setAccount_no(string ac);
	///Getter///
	string getname()const;
	string getemail()const;
	string getpassword()const;
	string getgender()const;
	string getphone_no()const;
	string getAdressDetails();
	string getBank_name()const;
	string getAccount_no()const;
	~User();
};



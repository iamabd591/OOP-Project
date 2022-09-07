#pragma once
#include"User.h"
#include"ProductList.h"
class Addministrator:public User
{
protected:
	string Adminid;
public:
	ProductList P;
	Addministrator();
	Addministrator(string i,string n, string e, string p, string g, string ph, string bn, string ac);
	void setAddminId(string i);
	virtual string getAddminid();
	void Display();
	void RemoveProduct();
	void AddProduct();
	void AddProduct(const Product& s);
	~Addministrator();
};


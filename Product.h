#pragma once
//#include "ProductList.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Product
{
protected:
	string ProductName;
	string  id;
	double Price;
public:
	Product();
	Product(string Pn,string i, double Pr);
	void setProduxtName(string Pn);
	void setProdutid(string i);
	void setPrice(double Pr);;
	string getProductNmae();
	virtual string getProductid();
	double getPrice();
	void display();
	~Product();
};

